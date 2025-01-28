// make this pattern ->solved
// 1
// 2 3
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
#include<iostream>
using namespace std;

int main()
{
    int ROWS = 6;
    int num = 1;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}