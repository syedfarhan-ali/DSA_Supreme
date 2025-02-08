#include<iostream>
using namespace std;
//Sort so that zeros come first [0,1,0,0,1,0,0,1,0] -> [0,0,0,0,0,0,1,1,1]
void Sort(int array[],int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (array[left] == 1 && array[right] == 0)
        {
            swap(array[left],array[right]);
            left++;
            right--;
        }
        else if(array[left] == 1 && array[right] == 1)
        {
            right--;
        }
        else if(array[left] == 0 && array[right] == 1)
        {
            left++;
            right--;
        }
        else if(array[left] == 0 && array[right] == 0)
        {
            left++;
        }
        
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}
int main()
{
    int array[] = {0,1,0,0,1,0,0,1,0};
    int size = sizeof(array)/sizeof(array[0]);
    Sort(array,size);
    
    return 0;
}