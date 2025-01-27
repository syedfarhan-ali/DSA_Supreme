// make this pattern -> solved
// *
// * *
// * * * 
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;

int main()
{
    int ROWS = 10;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < ROWS - 1; row++)
    {
        for (int col = 0; col < ROWS - row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}