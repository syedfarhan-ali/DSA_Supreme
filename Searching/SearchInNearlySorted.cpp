#include<iostream>
using namespace std;
int findElement(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if(arr[mid] == target)
        {
            return mid;
        }
        if (mid + 1 < size && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 2;//we -2 because we don't want to check the same element twice
        }
        else if(arr[mid] < target)
        {
            start = mid + 2;//we +2 because we don't want to check the same element twice
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {20,10,30,50,40,70,60};
    int size = 7;
    int target = 70;
    cout << findElement(arr,size,target);
    return 0;
}