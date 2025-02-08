#include<iostream>
#include<vector>
using namespace std;
int moutainPeak(vector<int> vec)
{
    int start = 0;
    int end = vec.size()-1;
    int size = vec.size();
    int peak = -1;

    int mid = start + (end - start)/2;

    while(start < end)
    {
        if(vec[mid] < vec[mid + 1])
        {
            start = mid + 1;
            peak = mid;
        }
        else
        {
            end = mid;
        }
        
        mid = start + (end - start)/2;
        
    }
    return vec[start];
}
int main()
{
    vector<int> vec = {10,20,50,40,30};
    cout << moutainPeak(vec);
    return 0;
}