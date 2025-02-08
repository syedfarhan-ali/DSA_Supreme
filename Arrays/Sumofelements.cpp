#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int size = 5;
    int sum = 0;
    //INPUT
    cout << "Enter input";
    for(int i = 0; i<size;i++)
    {
        cin >> arr[i];
        sum += arr[i]; // sum = sum + arr[i]
    }
    //OUTPUT
    cout << "Sum is : " << sum;
    return 0;
}