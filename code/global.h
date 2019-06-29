#ifndef __snake_pit__globals__
#define __snake_pit__globals__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int max_rows = 20; 
const int max_cols = 40;  
const int max_snakes = 180; 

int up    = 0;
int down  = 1;

int decode_direction(char dir);
bool delta_direction(int dir, int& row_delta, int& col_delta);
void clear_screen();
