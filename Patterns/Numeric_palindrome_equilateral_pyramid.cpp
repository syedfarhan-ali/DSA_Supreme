// make this - > solved
//     1
//    1 2 1
//   1 2 3 2 1
//  1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
    int ROWS = 5;
    int num;
    for (int row = 0; row < ROWS; row++)
    {
        num = row ;
        for (int col = 0; col < ROWS - row - 1; col++)
        {
            cout << " ";
        }
        
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        
        for (int col = 0; col < row; col++)
        {
            
            cout << num-- <<" ";
        }
        
        cout << endl;
    }
    
    return 0;
}