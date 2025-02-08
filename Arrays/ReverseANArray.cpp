#include<iostream>
using namespace std;

int main()
{
    int array[6] = {10,20,30,40,50,60};
    int size = 6;
    int right = size - 1;
    int left = 0;
    // while (left <= right)
    // {
    //     swap(array[left],array[right]);
    //     left++;
    //     right--;
    // }
    
    for(int left = 0,right = size -1; left<=right; left++,right--)
    {
        
        swap(array[left],array[right]);  
          
    }
    //printing the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << "value of index (" << i <<") is : " << array[i] << endl;
    }
    
    return 0;
}