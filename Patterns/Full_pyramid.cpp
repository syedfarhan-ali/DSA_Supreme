#include<iostream>
using namespace std;
//full pyramid
int main()
{
    int ROWs = 5;
    for (int row = 0; row < ROWs; row++)
    {
        for (int col = 0; col < ROWs - row -1; col++)
        {
            cout << " ";
        }
        for (int j = 0; j < row+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}