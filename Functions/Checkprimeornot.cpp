#include<iostream>
using namespace std;
//check prime or not

void checkPrime(int number){
    for (int i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            cout << "Not a Prime Number.";
            return;
        }

        cout << number <<" is a Prime Number.";
        return;  
    }
    
}
int main()
{
    int input = 101;
    checkPrime(input);    
    return 0;
}