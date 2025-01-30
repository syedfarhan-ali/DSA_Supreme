#include<iostream>
using namespace std;
//Program to find greatest among three numbers
// void greatest(int number1,int number2, int number3){
//     if (number1 >= number2 && number1 >= number3 )
//     {
//         cout << "Greatest is : " << number1;    
//     }
//     else if (number2 >= number1 && number2 >= number3)
//     {
//         cout << "Greatest is : " << number2;    
//     }
//     else
//     {
//         cout << "Greatest is : " << number3;    
//     }
// }

// void greatest(int number1,int number2,int number3){
//     int ans1 = max(number1,number2);
//     int finalAns = max(ans1,number3);
//     cout << finalAns << " is the greatest.";
// }

int greatest(int number1,int number2,int number3){
    int ans1 = max(number1,number2);
    int finalAns = max(ans1,number3);
    return finalAns;
}
int main()
{
    int 
    num1 = 8,
    num2 = 255,
    num3 = 1;
    int answer = greatest(num1,num2,num3);
    cout << answer << " is the greatest.";
    return 0;
}