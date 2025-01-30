#include<iostream>
using namespace std;
//sum of 1  to N

int sum(int number){

    int trackSum = 0;
    for (int i = 1; i <= number; i++)
    {
        trackSum = i + trackSum;
    }
    return trackSum;    
}
int main()
{
    int N = 20;
    int answer = sum(N);    
    cout << answer << " is sum of 1 to " << N;
    return 0;
}