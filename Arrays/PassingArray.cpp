#include<iostream>
using namespace std;
void printArray(int array[],int Size)
{
    for(int i = 0;i<Size;i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    printArray(arr,size);
    return 0;
}