#include<iostream>
using namespace std;
//Letter pyramid
int main()
{
    int ROWS = 6;
    char ch;

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {   
            ch = col + 1 + 'A' - 1;
            cout << ch;
        }
        for (char aplhabet = ch; aplhabet > 'A';)
        {   
            --aplhabet;
            cout << aplhabet;
        }
        
        cout << endl;
    }
    
    return 0;
}