#include<iostream>
using namespace std;
void rowSum(int arr[][3],int row,int col){
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum of row : " << i << " is : " << sum << endl;
        sum = 0;
    }
    
} 
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    rowSum(arr,row,col);
    return 0;
}