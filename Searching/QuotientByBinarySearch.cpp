#include<iostream>
using namespace std;
int findQuotient(int dividend,int divisor)
{
    int start = 0;
    int end = dividend;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if(mid * divisor < dividend)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        
    }
      
    
    return ans;
}
int main()
{
    int dividend = 49;
    int divisor = 9;
    int finalAns = findQuotient(abs(dividend),abs(divisor));
    if ((dividend < 0 && divisor > 0)||(dividend > 0 && divisor < 0))
    {
        finalAns = 0 - finalAns;
    }
    cout << "Answer is : " << finalAns;
    return 0;
}