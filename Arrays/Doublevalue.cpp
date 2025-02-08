#include<iostream>
using namespace std;

int main()
{
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value at index " << i << " :";
        cin >> array[i];
        array[i] = array[i]*2;
    }
    cout << "Output : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << " :" << array[i] << endl;
    }
    
    
    return 0;
}