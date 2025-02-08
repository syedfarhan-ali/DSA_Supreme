#include<iostream>
using namespace std;
int lastOccurance(int arr[],int size,int target)
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
            start = mid + 1;
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
int firstOccurance(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int firstOccurance = -1;
    int allOccurance = -1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if (arr[mid] == target)
        {
            firstOccurance = mid;
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
    int last_occurance = lastOccurance(arr,size,target);
    allOccurance = last_occurance - firstOccurance + 1;
    return allOccurance;
}
int main()
{
    int arr[9] = {10,20,30,30,30,60,70,80,90};
    int size = 9;
    int target = 30;
    int ans = firstOccurance(arr,size,target);
    if (ans == -1)
    {
        cout << "Target not found";
    }
    else
    {
        cout << "total occurance's are : " << ans;
    }
    
    
    return 0;
}