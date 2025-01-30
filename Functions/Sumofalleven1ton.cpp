#include<iostream>
using namespace std;
//sum of all even from 1  to N

// int sum(int number){

//     int trackSum = 0;
//     for (int i = 2; i <= number; i+=2)
//     { 
//        trackSum = i + trackSum;    
//     }
//     return trackSum;    
// }

int sum(int number){

    int trackSum = 0;
    for (int i = 2; i <= number; i++)
    { 
        if((i & 1) == 0){
            trackSum = i + trackSum;    
        }
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