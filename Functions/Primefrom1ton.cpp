//UNSOLVED
#include<iostream>
using namespace std;
//Print all prime numbers from 1 to N
bool isPrime(int number){
    if (number == 1)
    {
        return false;
    }
    for (int iteration = 2; iteration < number; iteration++)
    {
        if (number % iteration == 0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main()
{
    int INPUT = 100;
    for (int count = 1; count <= INPUT; count++)
    {
        if (isPrime(count))
        {
            cout << count << " ";
        }
        
    }
    
    return 0;
}