#ifndef __PADDLE_H__
#define __PADDLE_H__
#include "game.h"

Sprite* paddle_sprite;

int paddle_pos_x;
int paddle_pos_y;
int paddle_vel_x;
int paddle_width;
int paddle_height;

void paddle_init();
void paddle_update();

#endif