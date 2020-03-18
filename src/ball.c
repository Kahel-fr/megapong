#include "game.h"

void ball_init(){
    ball_pos_x = 100;
    ball_pos_y = 100;
    ball_vel_x = 1;
    ball_vel_y = 1;
    ball_width = 8;
    ball_height = 8;
}

void ball_move(){

	if(ball_pos_x < LEFT_EDGE){
		ball_pos_x = LEFT_EDGE;
		ball_vel_x = -ball_vel_x;
	} else if(ball_pos_x + ball_width > RIGHT_EDGE){
		ball_pos_x = RIGHT_EDGE - ball_width;
		ball_vel_x = -ball_vel_x;
	}
	if(ball_pos_y < TOP_EDGE){
		ball_pos_y = TOP_EDGE;
		ball_vel_y = -ball_vel_y;
	} else if(ball_pos_y + ball_height > BOTTOM_EDGE){
		ball_pos_y = BOTTOM_EDGE - ball_height;
		ball_vel_y = -ball_vel_y;
	}

	ball_pos_x += ball_vel_x;
	ball_pos_y += ball_vel_y;

	SPR_setPosition(ball_sprite,ball_pos_x,ball_pos_y);
}