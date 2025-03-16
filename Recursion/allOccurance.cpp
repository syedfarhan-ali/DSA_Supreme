#include<iostream>
using namespace std;
void occurance(int arr[],int size,int index,int target){
    if(index >= size){
        return;
    }
    if(target == arr[index]){
        cout << index << " ";
    }
    occurance(arr,size,++index,target);
}
int main()
{
    int array[5] = {3,0,2,3,5};
    int size = 5;
    int index = 0;
    int target = 3;
    occurance(array,size,index,target);
    return 0;
}