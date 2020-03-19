#include "game.h"

void game_screen_init() {
	VDP_loadTileSet(bgtile.tileset,1,DMA);
	VDP_setPalette(PAL1, bgtile.palette->data);
	VDP_fillTileMapRect(PLAN_B,TILE_ATTR_FULL(PAL1,0,FALSE,FALSE,1),0,0,40,30);
	ball_init();
	paddle_init();
}

void game_screen_draw() {
	if (is_single_pressed(BUTTON_START)) {
		change_screen(SCREEN_MAIN);
	}
	paddle_update();
	game_screen_check_collisions();
	ball_move();
}

void game_screen_check_collisions(){
	if(ball_pos_x < paddle_pos_x + paddle_width && ball_pos_x + ball_width > paddle_pos_x){
	if(ball_pos_y < paddle_pos_y + paddle_height && ball_pos_y + ball_height >= paddle_pos_y){
		ball_pos_y = paddle_pos_y - ball_height - 1;
		ball_vel_y = -ball_vel_y;
	}
}
}