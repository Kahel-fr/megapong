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
	ball_move();
	paddle_update();
}