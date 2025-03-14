#include<iostream>
#include<limits.h>
using namespace std;
void minimum(int arr[],int size,int index,int &mini){
    if(index >= size){
        return;
    }
    mini = min(mini,arr[index]);
    minimum(arr,size,++index,mini);
    return;
}
int main()
{
    int array[5] = {50,40,30,20,10};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    minimum(array,size,index,mini);
    cout << "The answer is : " << mini;
    return 0;
}