#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    //pointer to an array
    int* ptr1 = arr;
    //pointer to an array
    int (*ptr)[5] = &arr;
    cout << (*ptr)[3];
    
    //array of pointers
    int* arrPtr[5];
    return 0;
}