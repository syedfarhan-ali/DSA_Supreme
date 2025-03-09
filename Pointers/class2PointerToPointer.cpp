#include<iostream>
using namespace std;
void solve(int* &p){//test case when p was not passed with reference
    p = p + 5;
}
int main()
{
    int a = 5;
    int* ptr = &a;

    cout << "ptr : " << ptr << endl;
    cout << "&ptr : " << &ptr << endl;
    cout << "*ptr : " << *ptr << endl;

    solve(ptr);
    cout << "ptr : " << ptr << endl;
    cout << "&ptr : " << &ptr << endl;
    cout << "*ptr : " << *ptr << endl;



    // int a = 5;
    // int* ptr = &a;
    // int** ptr2 = &ptr;
    // int*** ptr3 = &ptr2;
    // int**** ptr4 = &ptr3;
    // cout << " a : " << a << endl;
    // cout << "*ptr : " << *ptr << endl;
    // cout << "**ptr2 : " << **ptr2 << endl;
    // cout << "***ptr3 : " << ***ptr3 << endl;
    // cout << "****ptr4 : " << ****ptr4 << endl;

    return 0;
}