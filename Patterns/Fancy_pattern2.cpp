// make this pattern -> solved
// * * * * * * * * 1 * * * * * * * *
// * * * * * * * 2 * 2 * * * * * * *
// * * * * * * 3 * 3 * 3 * * * * * *
// * * * * * 4 * 4 * 4 * 4 * * * * *
// * * * * 5 * 5 * 5 * 5 * 5 * * * *
#include<iostream>
using namespace std;

int main()
{
    int ROWS = 5;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < 2*ROWS - row - 2; col++)
        {
            cout << "* ";
        }
        
        for (int col = 0; col < 2*row + 1; col++)
        {
            if (col%2 == 0)
            {
                cout << row+1 << " ";
            }
            else
            {
                cout << "* ";
            }     
        }
        
        for (int col = 0; col < 2*ROWS - row - 2; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}