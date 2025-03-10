#include<iostream>
using namespace std;
void reverseCounting(int n){
    if(n == 1){
        cout << n;
        return;
    }
    cout << n << " ";
    reverseCounting(n - 1);
}
int main()
{
    int n = 5;
    reverseCounting(n);
    return 0;
}