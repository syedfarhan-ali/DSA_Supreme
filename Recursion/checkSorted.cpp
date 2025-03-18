#include<iostream>
using namespace std;
bool isSorted(int arr[],int size,int index,bool &is_Sorted){
    if(index >= size){
        return true;
    }
    if(arr[index] >= arr[index - 1]){
        bool forwardAns = isSorted(arr,size,++index,is_Sorted);
        return forwardAns;
    }else{
        return false;
    }
}
int main()
{
    int array[5] = {10,10,30,40,50};
    int size = 5;
    int index = 1;//because we don't want to check behind index 0 and that is out of bounds
    bool is_Sorted = isSorted(array,size,index,is_Sorted);
    if(is_Sorted){
        cout << "Array is sorted";
    }else{
        cout << "Array is not sorted ";
    }
    return 0;
}