#include<iostream>
using namespace std;
void printArray(int arr[],int size,int idx){
    if(idx >= size){
        return;
    }
    cout << arr[idx] << " ";
    idx++;
    printArray(arr,size,idx);
}
int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    printArray(array,size,index);
    return 0;
}