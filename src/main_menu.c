#include <genesis.h>
#include <kdebug.h>
#include "main_menu.h"
#include "game.h"
#include "input.h"

void main_menu_init() {
	main_menu_top_position = 12;
	main_menu_selection = 0;
	main_menu_button_was_pressed = 0;
	char* main_menu_lines[3] = {
		"Play",
		"Options",
		"Menu"
	};

	VDP_drawText("Megapong", 8, 8);

	for (int i = 0; i < sizeof(main_menu_lines)/sizeof(main_menu_lines[0]); i++) {
		int y = main_menu_top_position + i * 2;
		VDP_drawText(main_menu_lines[i], 10, y);
	}
}

void main_menu_draw() {
	if (is_single_pressed(BUTTON_DOWN)) {
		if (main_menu_selection < sizeof(main_menu_lines) / sizeof(main_menu_lines[0]) - 1)
			main_menu_selection += 1;
		else
			main_menu_selection = 0;
	}
	if (is_single_pressed(BUTTON_UP)) {
		if (main_menu_selection > 0)
			main_menu_selection -= 1;
		else
			main_menu_selection = sizeof(main_menu_lines) / sizeof(main_menu_lines[0]) - 1;
	}
	for (int i = 0; i < sizeof(main_menu_lines) / sizeof(main_menu_lines[0]); i++) {
		int y = main_menu_top_position + i * 2;
		VDP_clearText(9, y, 1);
	}
	VDP_drawText("X", 9, main_menu_top_position + main_menu_selection * 2);
	if (is_single_pressed(BUTTON_START)) {
		switch (main_menu_selection) {
		case 0:
			change_screen(SCREEN_GAME);
		}
	}
}