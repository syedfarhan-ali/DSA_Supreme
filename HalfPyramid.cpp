#include<iostream>
using namespace std;
//Half pyramid
int main()
{
    int ROWs = 20;
    for (int row = 0; row < ROWs; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}