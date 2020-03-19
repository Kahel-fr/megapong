#ifndef __GAME_H__
#define __GAME_H__
#include <genesis.h>
#include <kdebug.h>
#include "input.h"
#include "tile.h"
#include "sprite.h"
#include "main_menu.h"
#include "game_screen.h"
#include "ball.h"
#include "paddle.h"

#define SCREEN_MAIN 0
#define SCREEN_GAME 1

int current_screen;
void change_screen(int screen);

#endif