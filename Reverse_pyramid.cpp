#include<iostream>
using namespace std;
//Reverse pyramid
int main()
{
    int ROWs = 5;
    for (int row = 0; row < ROWs; row++)
    {
        for (int col = 0; col < ROWs - row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}