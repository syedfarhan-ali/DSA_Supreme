#include<iostream>
using namespace std;
void solve(int arr[],int size){
    cout << "Size of array in solve : "<< sizeof(arr) << endl;// prints 8
}
int main()
{
    int array[] = {10,20,30,40,50};
    cout << "Size of array in main : "<< sizeof(array) << endl;//prints 20
    solve(array,5);
    
    // int arr[5] = {1,2,3,4,5};
    // //pointer to an array
    // int* ptr1 = arr;
    // //pointer to an array
    // int (*ptr)[5] = &arr;
    // cout << (*ptr)[3];
    
    // //array of pointers
    // int* arrPtr[5];
    return 0;
}