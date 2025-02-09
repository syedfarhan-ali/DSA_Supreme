#include<iostream>
using namespace std;
int mySqrt(int x) {
    int start = 0;
    int end = x;
    int ans = -1;
    long long int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(mid*mid == x)
        {
            return mid;
        }
        else if(mid*mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(mid*mid > x)
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int input = 121;
    cout << mySqrt(input);
    return 0;
}