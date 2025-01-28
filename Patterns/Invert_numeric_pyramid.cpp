#include<iostream>
using namespace std;
//Invert numeric pyramid
int main()
{
    int ROWs = 8;
    for (int row = 0; row < ROWs; row++)
    {
        for (int col = 0; col < ROWs - row; col++)
        {
            cout << col+1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}