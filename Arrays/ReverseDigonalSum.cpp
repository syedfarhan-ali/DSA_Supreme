#include<iostream>
using namespace std;
void reverseDigonalSum(int arr[][3],int row,int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i+j == col - 1)
            {
                cout << arr[i][j] << " ";
                sum+=arr[i][j];
                cout << "Sum is : "<<sum;
            }
        }
        cout << endl;
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
    reverseDigonalSum(arr,row,col);
    return 0;
}