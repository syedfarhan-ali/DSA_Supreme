#include<iostream>
using namespace std;
//hollow pyramid reverse
int main()
{
    int ROWS = 5;
    for (int row = 0; row < ROWS; row++)
    {
        
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < ROWS - row; col++)
        {
            if(col == 0||col == ROWS - row -1){
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
            
        }
        cout << endl;
    }
    
    return 0;
}