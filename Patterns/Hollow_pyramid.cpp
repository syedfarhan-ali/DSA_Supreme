#include<iostream>
using namespace std;
//hollow pyramid
int main()
{
    int ROWS = 4; 
    for (int row = 0; row < ROWS; row++)
    {
      for (int space = 0; space < ROWS - row -1; space++)
      {
        cout << " ";
      }
      for (int col = 0; col < row + 1; col++)
      {
        if (col == 0||col == row)
        {
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