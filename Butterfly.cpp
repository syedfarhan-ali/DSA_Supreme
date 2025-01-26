// make this pattern
// *             * 6 spaces
// * *         * * 4 spaces
// * * *     * * * 2 spaces
// * * * * * * * *
// * * * * * * * *
// * * *     * * * 2 spaces
// * *         * * 4 spaces 
// *             * 6 spaces
#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int ROWS = num / 2;
    //upper half
    for (int row = 0; row < ROWS; row++)
    {
        
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int space = 0; space < 2*ROWS - 2*row - 2; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //lower half
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS - row; col++)
        {
            cout << "* ";
        }
        for (int space = 0; space < 2*row; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < ROWS - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}