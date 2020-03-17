#include <genesis.h>
#include "main_menu.h"

int main()
{
	init_main_menu();
	while (1)
	{
		draw_main_menu();
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}