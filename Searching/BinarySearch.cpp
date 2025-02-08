#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        } 
    }
    return -1;
}
int main()
{
    int arr[9] = {10,20,30,40,50,60,70,80,90};
    int size = 9;
    int target = 90;
    int ans = binarySearch(arr,size,target);
    if (ans == -1)
    {
        cout << "Target not found";
    }
    else
    {
        cout << "Element found at index : " << ans;
    }
    
    
    return 0;
}