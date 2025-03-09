#include<iostream>
using namespace std;
void solve(int arr[],int size){//instead of int arr[] we can also write int *arr
    // cout << "Size of array in solve : "<< sizeof(arr) << endl;// prints 8
    // cout << "printing array : " << arr << endl;
    // cout << "printing &array : " << &arr << endl;
    *arr = *arr + 1;
}
int main()
{
    int arr1[] = {10,20,30};
    solve(arr1,3);
    for(int i:arr1){
        cout << i << " ";
    }
    // int array[] = {10,20,30,40,50};
    // cout << "Size of array in main : "<< sizeof(array) << endl;//prints 20
    // cout << "printing array : " << array << endl;
    // cout << "printing &array : " << &array << endl;
    // solve(array,5);
    
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