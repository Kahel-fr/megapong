#include <genesis.h>
#include <kdebug.h>
#include "game_screen.h"
#include "game.h"
#include "input.h"
#include "tile.h"
#include "ball.h"

void game_screen_init() {
	VDP_loadTileSet(bgtile.tileset,1,DMA);
	VDP_setPalette(PAL1, bgtile.palette->data);
	VDP_fillTileMapRect(PLAN_B,TILE_ATTR_FULL(PAL1,0,FALSE,FALSE,1),0,0,40,30);
	ball_sprite = SPR_addSprite(&imgball,100,100,TILE_ATTR(PAL1,0, FALSE, FALSE));
}

void game_screen_draw() {
	if (is_single_pressed(BUTTON_START)) {
		change_screen(SCREEN_MAIN);
	}
}