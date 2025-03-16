#include<iostream>
using namespace std;
void doubleNum(int arr[],int size,int index){
    if(index >= size){
        return;
    }
    arr[index] = arr[index]*2;
    doubleNum(arr,size,++index);
}
int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    doubleNum(array,size,index);
    for(int ele:array){
        cout << ele <<" ";
    }
    return 0;
}