#include <genesis.h>
#include "main_menu.h";

void draw_main_menu() {
	if (JOY_readJoypad(JOY_1) == BUTTON_DOWN && main_menu_button_was_pressed == 0) {
		if (main_menu_selection < 2)
			main_menu_selection += 1;
		else
			main_menu_selection = 0;
	}
	main_menu_button_was_pressed = (JOY_readJoypad(JOY_1) == BUTTON_DOWN) ? 1 : 0;
	VDP_clearText(9, 12, 1);
	VDP_clearText(9, 14, 1);
	VDP_clearText(9, 16, 1);
	VDP_drawText("X", 9, main_menu_cursor_positions[main_menu_selection]);
	VDP_drawText("Play", 10, 12);
	VDP_drawText("Options", 10, 14);
	VDP_drawText("Options", 10, 16);
}