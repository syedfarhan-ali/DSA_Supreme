#include<iostream>
using namespace std;
//fancy pattern
int main()
{
    int ROWS = 4;
    for (int row = 0; row < ROWS; row++)
    {   

        for (int col = 0; col < 2*row + 1; col++)
        {
            if(col%2 == 0)
            {
                cout << row+1;
            }
            else
            {
                cout << "*";
            }
            
        }
        
        cout << endl;
    }
    
    for (int row = 0; row < ROWS; row++)
    {   

        for (int col = 0; col < 2*ROWS - 2*row -1; col++)
        {
            if(col%2 == 0)
            {
                cout << ROWS - row;
            }
            else
            {
                cout << "*";
            }
            
        }
        
        cout << endl;
    }
    return 0;
}