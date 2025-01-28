//create this pattern -> solved
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5 
// 5
#include<iostream>
using namespace std;

int main()
{
    int ROWS = 9;
    int num = 1;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS - row; col++)
        {
            if (col == 0||col == ROWS - row - 1||row == 0)
            {
                cout << row+col+1 << " ";
            }
            else
            {
                cout << "  ";
            }  
        }
        cout << endl;
    }
    
    return 0;
}