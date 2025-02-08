#include<iostream>
using namespace std;
bool findTarget(int array[][3],int row,int col,int target){
    bool flag = false;
    for(int i = 0;i < row;i++){
        for(int j = 0; j < col;j++){
            if(array[i][j] == target){
                return flag = true;
            }
        }
    }
    return flag;
}
int main()
{
    int target = 70;
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {70,8,9}
    };
    cout << "Found or not : " << findTarget(arr,row,col,target);
    return 0;
}