#include "game.h"

void game_screen_init() {
	score = 0;
	paused = 0;
	VDP_loadTileSet(bgtile.tileset,1,DMA);
	VDP_setPalette(PAL1, bgtile.palette->data);
	VDP_fillTileMapRect(PLAN_B,TILE_ATTR_FULL(PAL1,0,FALSE,FALSE,1),0,0,40,30);
	ball_init();
	paddle_init();
	draw_score();
}

void game_screen_draw() {
	if (is_single_pressed(BUTTON_START)) {
		paused = !paused;
		if(paused)
			show_message("PAUSE");
		else
			erase_message();
	}
	if(!paused){
		paddle_update();
		game_screen_check_collisions();
		ball_move();
	}
}

void game_screen_check_collisions(){
	if(ball_pos_x < paddle_pos_x + paddle_width && ball_pos_x + ball_width > paddle_pos_x){
		if(ball_pos_y < paddle_pos_y + paddle_height && ball_pos_y + ball_height >= paddle_pos_y){
			ball_pos_y = paddle_pos_y - ball_height - 1;
			ball_vel_y = -ball_vel_y;
			add_score();
		}
	}
}

void add_score(){
	score++;
	if( score % 10 == 0){
		ball_vel_x += (ball_vel_x> 0) - (ball_vel_x < 0);
		ball_vel_y += (ball_vel_y > 0) - (ball_vel_y < 0);
	}
	draw_score();
}

void draw_score(){
	VDP_clearText(0, 0, 9);
	VDP_setTextPlan(PLAN_A);
	char str_score[3] = "0";
	sprintf(str_score,"%d",score);
	VDP_drawText(str_score, 0, 0);
}

void show_message(char* message){
	VDP_setTextPlan(PLAN_A);
	VDP_drawText(message, 20 - strlen(message)/2 ,15);
}

void erase_message(){
	VDP_clearTextArea(0,10,40,10);
}