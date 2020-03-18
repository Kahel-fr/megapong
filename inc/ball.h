#ifndef __BALL_H__
#define __BALL_H__
#include "game.h"

#define LEFT_EDGE 0
#define RIGHT_EDGE 320
#define TOP_EDGE 0
#define BOTTOM_EDGE 224

Sprite* ball_sprite;

int ball_pos_x;
int ball_pos_y;
int ball_vel_x;
int ball_vel_y;
int ball_width;
int ball_height;

void ball_move();
#endif