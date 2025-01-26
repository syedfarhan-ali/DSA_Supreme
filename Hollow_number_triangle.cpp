#include<iostream>
using namespace std;
//hollow number triangle
int main()
{
    int ROWS = 5;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0)
            {
                cout << "1 ";
            }
            else if (col == row||row == ROWS - 1)
            {
                cout << col+1 << " ";
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