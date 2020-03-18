#include <genesis.h>
#include <kdebug.h>
#include "input.h"

void update_inputs(){
    lastPressed = JOY_readJoypad(JOY_1);
}

bool is_pressed(int key){
    return JOY_readJoypad(JOY_1) == key;
}

bool is_single_pressed(int key){
    return is_pressed(key) && key != lastPressed;
}