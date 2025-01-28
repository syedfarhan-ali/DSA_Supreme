#include<iostream>
using namespace std;
//Hollow diamond
int main()
{
    int num = 16;
    int ROWS = num/2;
    //pyramid
    for (int row = 0; row < ROWS; row++)
    {
        for (int space = 0; space < ROWS - row - 1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if(col == 0||col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        
        cout << endl;
    }
    
    //reverse pyramid
    for (int row = 0; row < ROWS; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < ROWS - row; col++)
        {
            if(col == 0||col == ROWS - row - 1)
            {
                cout << "* ";
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