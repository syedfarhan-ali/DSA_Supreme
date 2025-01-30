#include<iostream>
using namespace std;
//Factorial of a number using functions

int factorial(int number){
    int factorial = 1;
    for (int count = 1; count <= number; count++)
    {   
        factorial = factorial*count;
    }
    
    if (factorial == 0)
    {
        return factorial+1;
    }
    return factorial;
}

int main()
{
    int input = 1;
    cout << "Factorial is : " << factorial(input);
    return 0;
}