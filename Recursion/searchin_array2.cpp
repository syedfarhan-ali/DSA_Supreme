#include<iostream>
using namespace std;

int search(int arr[],int size,int index,int target){
    if(index >= size){
        return -1;
    }
    if(target == arr[index]){
        return index;
    }

    search(arr,size,++index,target);
    
}
int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 30;
    int ansIndex = search(array,size,index,target);
    cout << "Ans is : " << ansIndex;
    return 0;
}