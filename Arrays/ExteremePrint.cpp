#include<iostream>
using namespace std;

int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int right = size - 1;
    int left = 0;
    while (left <= right)
    {
        if (left == right)
        {
            cout << array[left];
            break;
        }
        
        cout << array[left] << " " << array[right] << " ";
        left++;
        right--;
    }
    
    return 0;
}