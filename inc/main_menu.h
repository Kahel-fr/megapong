#ifndef __MAIN_MENU_H__
#define __MAIN_MENU_H__

char* main_menu_lines[] = {
	"Play",
	"Options",
	"Menu"
};
int main_menu_top_position = 12;
int main_menu_cursor_positions[] = { 12, 14, 16 };
int main_menu_selection = 0;
bool main_menu_button_was_pressed = 0;
//int[3] main_menu_cursor_positions = { 12, 14, 16 };
void draw_main_menu();

#endif