#include "Pit.h"

using namespace std;

History::History(int total_rows, int total_cols) {
    count_rows = total_rows;
    count_cols = total_cols;
    for (int i = 0; i < total_rows; i++)
    {
        for (int j = 0; j < total_cols; j++)
        {
            grid[i][j] = 'B';
        }
    }
}

bool History::record(int row_ind, int column_ind) {
    if ((row_ind <= count_rows && row_ind >= 1 ) && (column_ind <= count_cols && column_ind >= 1))
    {
        if (grid[row_ind-1][column_ind-1] == 'B')
        {
            grid[row_ind-1][column_ind-1] = 'A';
            return true;
        }
        else if (grid[row_ind-1][column_ind-1] == 'Z')
        {
            return true;
        }
        else
        {
            grid[row_ind-1][column_ind-1]++;
            return true;
        }
    }
    else
        return false;
}

void History::display() const {
    clearScreen();
    for (int row_ind = 0; row_ind < count_rows; row_ind++)
    {
        for (int column_ind = 0; column_ind < count_cols; column_ind++)
            cout << grid[row_ind][column_ind];
        cout << endl;
    }
    cout << endl;   
}
