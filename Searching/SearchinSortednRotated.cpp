#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>&nums){
        int size = nums.size();
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start)/2;
        while(start <= end)
        {
            if(start == end)
            {
                return start;
            }
            if(mid + 1 < size && nums[mid] > nums[mid+1])//mid + 1 < size mat bhul jana warna invalid index access ho jyega
                return mid;
            else if(mid - 1 >= 0 && nums[mid] < nums[mid-1])//mid - 1 >= 0 mat bhul jana warna invalid index access ho jyega
                return mid-1;
            else if(nums[start]>nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
            mid = start + (end - start)/2;
        }
        return -1;
}
int binarySearch(vector<int>&vec,int target)
{
    int pivotIndex = findPivot(vec);
    int size = vec.size();
    int ans = -1;
    
    if (target >= vec[0] && target <= vec[pivotIndex])
    {
        int start = 0;
        int end = pivotIndex;
        int mid = start + (end - start)/2;
        while(start <= end){
            if (target == vec[mid])
            {
                ans = vec[mid];
                return mid;
            }
            else if(target > vec[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        
        
    }
    else
    {
        int start = pivotIndex + 1;
        int end = size - 1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if (target == vec[mid])
            {
                ans = vec[mid];
                return mid;
            }
            else if(target > vec[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        
    }
    return -1;
}
int main()
{
    int target = 10;
    vector<int> vec;
    vec.push_back(12);
    vec.push_back(14);
    vec.push_back(16);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);

    cout << binarySearch(vec,target);
    return 0;
}