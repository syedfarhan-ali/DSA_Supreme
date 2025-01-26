#include<iostream>
using namespace std;
//Hollow reverse triangle
int main()
{
    int ROWS = 10;
    for(int row = 0; row < ROWS; row++)
    {
        for(int col = 0; col < ROWS - row; col++)
        {
            if(row == 0||row == ROWS - 1)
            {
                cout << "*";
            }
            else
            {
                if(col == 0||col == ROWS - row - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                
            }
            
            
        }
        cout << endl;
    }
    return 0;
}