#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int ansIndex = -1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if (arr[mid] == target)
        {
            ansIndex = mid;
            end = mid - 1;
        } 
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return ansIndex;
}
int main()
{
    int arr[9] = {10,20,30,30,30,60,60,80,90};
    int size = 9;
    int target = 60;
    int ans = firstOccurance(arr,size,target);
    if (ans == -1)
    {
        cout << "Target not found";
    }
    else
    {
        cout << "First occurance found at index : " << ans;
    }
    
    
    return 0;
}