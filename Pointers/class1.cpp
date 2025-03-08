#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int* ptr = &num;
    cout << "Printing *ptr:" << *ptr << endl;
    cout << "Printing size of ptr:" <<sizeof(ptr) << endl;

    char ch = 'k';
    char* cptr = &ch;
    cout << "Printing size of cptr:" <<sizeof(cptr) << endl;

    long lachi = 10;
    long* lptr = &lachi;
    cout << "Printing size of lptr:" <<sizeof(lptr) << endl;

    int* a = nullptr;
    cout << "value of a: " <<*a << endl;

    int a = 100;
    int* ptr = &a;

    cout << "printing a: "<< a << endl;
    cout << "printing &a: "<< &a << endl;
    // cout << "printing *a "<< *a << endl;
    cout << "printing ptr: "<< ptr << endl;
    cout << "printing *ptr: "<< *ptr << endl;
    cout << "printing &ptr: "<< &ptr << endl;

    (*ptr)++;
    cout << "printing (*ptr)++: "<< *ptr << endl;

    ++(*ptr);
    cout << "printing ++(*ptr): "<< *ptr << endl;

    *ptr = *ptr/2;
    cout << "printing *ptr = *ptr/2: "<< *ptr << endl;

    *ptr = *ptr - 2;
    cout << "printing *ptr = *ptr - 2: "<< *ptr << endl;

    int arr[5] = {10,20,30,40,50};
    cout << "printing arr :"<< arr << endl;
    cout << "printing &arr :"<< &arr << endl;
    cout << "printing arr[0] :"<< arr[0] << endl;
    cout << "printing *arr :"<< *arr << endl;
    cout << "printing *arr+1 :"<< *arr+1 << endl;
    cout << "printing *(arr)+1 :"<< *(arr)+1 << endl;
    cout << "printing *(arr+1) :"<< *(arr+1) << endl;
    cout << "printing *(arr+2) :"<< *(arr+2) << endl;
    cout << "printing *(arr+3) :"<< *(arr+3) << endl;

    char ch[50] = "Hello";
    char* cptr = ch;
    cout << ch << endl;
    cout << *cptr << endl;

    char ch[50] = "statement";
    char* cptr = ch;
    cout << "printing ch: "<< ch << endl;
    cout << "printing &ch: "<< &ch << endl;
    cout << "printing *(ch+3): "<< *(ch+3) << endl;
    cout << "printing cptr: "<< cptr << endl;
    cout << "printing &cptr: "<< &cptr << endl;
    cout << "printing *(cptr+3): "<< *(cptr+3) << endl;
    cout << "printing cptr+2: "<< cptr+2 << endl;
    cout << "printing *cptr: "<< *cptr << endl;
    cout << "printing *cptr+8: "<< cptr+8 << endl;

    char ch = 'a';
    char* cptr = &ch;
    cout << "printing cptr: "<< cptr << endl;
    
    return 0;
}