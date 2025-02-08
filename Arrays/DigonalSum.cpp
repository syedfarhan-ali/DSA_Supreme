#include<iostream>
using namespace std;
void digonalSum(int arr[][3],int row){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        cout << "element is " << arr[i][i] << endl;
        sum = sum + arr[i][i];
        cout << "Sum of Digonal : " << i << " is : " << sum << endl;
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
    digonalSum(arr,row);
    return 0;
}