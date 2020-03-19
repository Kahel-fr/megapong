#include "game.h"

void credits_screen_draw(){
    VDP_drawText("Dev: Michael Vanlerberghe", 1, 10);
    VDP_drawText("Thanks to Stephane Dallongeville", 1, 12);
    VDP_drawText("for the amazing SGDK", 1, 13);
    if(is_single_pressed(BUTTON_B) || is_single_pressed(BUTTON_B))
        change_screen(SCREEN_MAIN);
}