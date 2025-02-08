#include<iostream>
using namespace std;
void printArray(int array[][3],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main()
{
    // int arr[3][4] = {
    // {1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12}};
    
    // int row = 3;
    // int col = 4;
    // printArray(arr,row,col);

    int row = 3;
    int col = 3;
    int arr[3][3];
    for(int i = 0;i < row;i++){
        for(int j = 0;j< col;j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }
    printArray(arr,row,col);
    return 0;
}