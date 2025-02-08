#include<iostream>
using namespace std;
//shift all elements by 1 index [10,20,30,40,50,60] -> [60,10,20,30,40,50]
void Shift(int array[],int size)
{
    int temp = array[size -1];
    for (int i = size -1 ; i > 0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}
int main()
{
    int array[] = {10,20,30,40,50,60};
    int size = sizeof(array)/sizeof(array[0]);
    Shift(array,size);
    return 0;
}