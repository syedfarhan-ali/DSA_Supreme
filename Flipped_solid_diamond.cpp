#include<iostream>
using namespace std;
//flipped solid diamond
int main()
{
    int num = 16;
    int ROWS = num/2;

    //upper half
    for (int row = 0; row < ROWS; row++)
    {
        //inverse triangle
        for (int col = 0; col < ROWS - row; col++)
        {
            cout << "*";
        }
        //pyramid
        for (int col = 0; col < 2*row + 1; col++)
        {
            cout << " ";
        }
        //inverse triangle
        for (int col = 0; col < ROWS - row ; col++)
        {
            cout << "*";
        }
        
        cout << endl;
    }

    //lower half
    for (int row = 0; row < ROWS; row++)
    {
        //triangle
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        
        //inverse pyramid
        for (int col = 0; col < 2*ROWS - 2*row - 1; col++)
        {
            cout << " ";
        }
        
        //triangle
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}