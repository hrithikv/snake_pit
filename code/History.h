#ifndef __snake_pit__History__
#define __snake_pit__History__

#include <stdio.h>
#include "global.h"

class snake_pit;

class History
{
public:
    History(int no_rows, int no_cols);
    bool record(int r, int c);
    void display() const;
    
private:
    int  max_rows;
    int  max_cols;
    char max_grid[max_rows][max_cols];

};
