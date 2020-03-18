#include <genesis.h>
#include "game.h"
#include "input.h"
#include "main_menu.h"
#include "game_screen.h"
#include "tile.h"

void loadRessources();
void init_screen();
void draw_screen();

int main()
{
	//loadRessources();
	change_screen(SCREEN_MAIN);
	while (1)
	{
		draw_screen();
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		update_inputs();
		VDP_waitVSync();
	}
	return (0);
}

void change_screen(int screen) {
	current_screen = screen;
	init_screen();
}

void init_screen() {
	VDP_clearPlan(PLAN_B, TRUE);
	VDP_clearPlan(PLAN_A, TRUE);
	switch(current_screen){
		case SCREEN_MAIN:
			main_menu_init();
		break;
		case SCREEN_GAME:
			game_screen_init();
		break;
	}
}

void draw_screen() {
	switch(current_screen){
		case SCREEN_MAIN:
			main_menu_draw();
		break;
		case SCREEN_GAME:
			game_screen_draw();
		break;
	}
	SPR_update();
}

void loadRessources(){
		VDP_loadTileSet(bgtile.tileset,1,DMA);
}