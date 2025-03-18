//HW
//you are given digits convert them into a single number
//1 0 2 4 -> 1024
#include<iostream>
#include<cmath>
using namespace std;
void convertDigit(int arr[],int size,int index,int &ans){
    if(index >= size){
        return;
    }
    int power = pow(10,size - index - 1);
    ans = ans + arr[index] * power;
    convertDigit(arr,size,++index, ans);
}
int main()
{
    int array[8] = {1,0,2,4,5,7,8,9};
    int size = 8;
    int index = 0;
    int ans = 0;
    convertDigit(array,size,index,ans);
    cout << "Final ans = " << ans;
    cout << "Final ans = " << ans/2;
    return 0;
}