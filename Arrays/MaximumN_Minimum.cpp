#include <iostream>
#include <limits.h>
using namespace std;
int maximun(int arr[][4], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int minimum(int arr[][4],int row,int col){
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            
        }
        
    }
    
    return min;
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 60, -7, 8},
        {9, 10, 11, 12}};
    cout << "Maximum element is : " << maximun(arr, row, col);
    cout << endl;
    cout << "Minimum element is : " << minimum(arr, row, col);
    return 0;
}