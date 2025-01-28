#include<iostream>
using namespace std;
//full pyramid reverse
int main()
{
    int ROWS = 8;
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