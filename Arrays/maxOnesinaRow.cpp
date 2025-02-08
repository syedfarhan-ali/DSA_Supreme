#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1,0,0},
        {0,0,1},
        {0,1,1}
    };
    int size = 3;
    int rowCount = -1;
    int oneCount = 0;
   for (int row = 0; row < size; row++)
   {
        int Count = 0;
        for (int col = 0; col < size; col++)
        {
            if (arr[row][col] == 1)
            {
                Count++;
            }
           
        }
        if (Count > oneCount)
        {
            oneCount = Count;
            rowCount = row;
        }
        
   }
   cout << "max 1s are in row : " << rowCount << " with " << oneCount << " ones";
    return 0;
}