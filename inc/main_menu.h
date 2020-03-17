#ifndef __MAIN_MENU_H__
#define __MAIN_MENU_H__

extern char* main_menu_lines[3];
int main_menu_top_position;
int main_menu_selection;
bool main_menu_button_was_pressed;
void draw_main_menu();
void init_main_menu();

#endif