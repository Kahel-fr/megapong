#include <genesis.h>
#include "game.h"
#include "main_menu.h"
#include "game_screen.h"

void init_screen();
void draw_screen();

int main()
{
	change_screen(SCREEN_MAIN);
	while (1)
	{
		draw_screen();
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}

void change_screen(int screen) {
	current_screen = screen;
	init_screen();
}

void init_screen() {
	VDP_resetScreen();
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
}