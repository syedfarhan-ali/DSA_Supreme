#include<iostream>
using namespace std;
//Numeric Pyramid
int main()
{
    int ROWs = 8;
    for (int row = 0; row < ROWs; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout << col+1 <<" ";
        }
        cout << endl;
    }
    
    return 0;
}