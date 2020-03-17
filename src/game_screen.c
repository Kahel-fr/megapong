#include <genesis.h>
#include "game_screen.h"
#include "game.h"

void game_screen_init() {
	VDP_drawText("Game screen WIP", 10, 10);
}

void game_screen_draw() {
	if (JOY_readJoypad(JOY_1) == BUTTON_START) {
		change_screen(SCREEN_MAIN);
	}
}