#include<iostream>
using namespace std;
//Print all prime numbers from 1 to N
void primefrom1toN(int number){
    int num = 2;
    for (int count = 2; count <= number; count++)
    {
        if (num%count == 0)
        {
            
        }
        else
        {
            cout << num;
        }
        
        
    }
    
}

int main()
{
    int input = 10;
    primefrom1toN(input);
    return 0;
}