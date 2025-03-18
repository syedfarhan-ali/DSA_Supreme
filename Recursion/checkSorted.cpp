#include<iostream>
using namespace std;
void isSorted(int arr[],int size,int index,bool &is_Sorted){
    if(index >= size){
        return;
    }
    if(arr[index] < arr[index - 1]){
        is_Sorted = false;
    }
    isSorted(arr,size,++index,is_Sorted);
}
int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int index = 1;//because we don't want to check behind index 0 and that is out of bounds
    bool is_Sorted = true;
    isSorted(array,size,index,is_Sorted);
    cout << "is array sorted " << is_Sorted;
    return 0;
}