#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int start,int end,int target){
    if(start > end){
        return -1;
    }
    int mid = start + ((end - start)/2);
    if(target == arr[mid]){
        return mid;
    }
    if(target > mid){
        start = mid + 1;
        return binarySearch(arr,size,start,end,target);
    }else{
        end = mid - 1;
        return binarySearch(arr,size,start,end,target);
    }

}
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int start = 0;
    int end = size - 1;
    int target = 1;
    cout << "Target index is : " << binarySearch(array,size,start,end,target);
    return 0;
}