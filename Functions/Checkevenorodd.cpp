#include<iostream>
using namespace std;
//Check even or odd

// void checkEvenorOdd(int number){
//     if (number%2 == 0)
//     {
//         cout << number << " is even";
//     }
//     else
//     {
//         cout << number << " is odd";
//     }   
// }

//using bitwise operator
void checkEvenorOdd(int number){
    if ((number & 1))
    {
        cout << number << " is odd";
    }
    else
    {
        cout << number << " is even";
    } 
}
int main()
{
    int input = 58;
    checkEvenorOdd(input);    
    return 0;
}