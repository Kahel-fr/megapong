#include <genesis.h>
#include "main_menu.h"
#include "inputs.h"

int main()
{
	while (1)
	{
		draw_main_menu();
		read_inputs();
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}

void read_inputs() {

}