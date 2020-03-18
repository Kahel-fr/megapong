#ifndef _INPUT_H_
#define _INPUT_H_

#define MAX_INPUT 15

int lastPressed;
int pressed;

void update_inputs();
bool is_pressed(int key);
bool is_single_pressed(int key);
#endif
