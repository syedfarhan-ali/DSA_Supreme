#include<iostream>
using namespace std;
//diamond pattern
int main()
{
    int num = 8;
    int ROWS = num/2;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS - row -1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    

    //reverse
    for (int row = 0; row < ROWS; row++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << " ";
        }
        
        for (int col = 0; col < ROWS - row; col++)
        {
            cout << "* ";
        }  
        cout << endl;
    }
    
    return 0;
}