#include<iostream>
using namespace std;
//counting from 1 to N
void counting(int num){
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    
}
int main()
{
    int N = 255;
    counting(N);
    return 0;
}