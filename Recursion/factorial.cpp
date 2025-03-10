#include<iostream>
using namespace std;
int factorial(int n){
    //base case 
    if(n == 0||n == 1){
        return 1;
    }
    //processing
    
    //recursive relation
    int recursionKaAns = factorial(n-1);

    //processing
    int finalAns = n * recursionKaAns;
    return finalAns;
}
int main()
{
    int fact = 5;
    int ans = 1;
    ans = factorial(fact);
    cout << ans;
    return 0;
}