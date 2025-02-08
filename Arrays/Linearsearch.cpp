#include<iostream>
using namespace std;
bool LinearSearch(int array[],int size,int target)
{
    for(int i = 0;i<size;i++)
    {
        if (array[i] == target)
        {
            return true;
            break;
        }
        
    }
   return false;
}
int main()
{
    int arr[5] = {2,4,6,8,10};
    int target = 10;
    int size = 5;
    bool flag = false;
    flag = LinearSearch(arr,size,target);
     if (flag)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target not found";
    }
    
    
    return 0;
}