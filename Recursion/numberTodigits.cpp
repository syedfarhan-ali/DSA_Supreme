#include<iostream>
using namespace std;
void digits(int input){
    if(input == 0){
        return;
    }
    int digit = input % 10;
    input = input / 10;
    digits(input); 
    cout << digit << " ";
}
int main()
{
    int input = 4215;
    digits(input);
    return 0;
}