#include "game.h"

void how_to_screen_draw(){
    VDP_drawText("Move the paddle with left and right joystick.", 1, 10);
    VDP_drawText("If you miss the ball you lose.", 1, 11);
    VDP_drawText("Every 10 points the ball go faster.", 1, 12);
    VDP_drawText("Enjoy ;-)", 1, 15);
    if(is_single_pressed(BUTTON_START) || is_single_pressed(BUTTON_B))
        change_screen(SCREEN_MAIN);
}