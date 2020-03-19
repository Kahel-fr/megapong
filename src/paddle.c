#include "game.h"

void paddle_init(){
    paddle_pos_x = 144;
    paddle_pos_y = 200;
    paddle_vel_x = 0;
    paddle_width = 32;
    paddle_height = 8;

    paddle_sprite = SPR_addSprite(&paddle, paddle_pos_x, paddle_pos_y, TILE_ATTR(PAL1, 0, FALSE, FALSE));
}

void paddle_update(){
    if(is_pressed(BUTTON_LEFT)){
        paddle_vel_x = -3;
    }
    else if(is_pressed(BUTTON_RIGHT)){
        paddle_vel_x = 3;
    }

	paddle_pos_x += paddle_vel_x;

	if(paddle_pos_x < LEFT_EDGE) paddle_pos_x = LEFT_EDGE;
	if(paddle_pos_x + paddle_width > RIGHT_EDGE) paddle_pos_x = RIGHT_EDGE - paddle_width;

	SPR_setPosition(paddle_sprite,paddle_pos_x,paddle_pos_y);
}