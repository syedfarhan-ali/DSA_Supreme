#include<iostream>
using namespace std;
//sort for that 0s come first then 1s and 2s
void sortArray(int arr[],int size,int right ,int left,int index){
    
    cout << "Before sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    //sorting
    while (index <=right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index],arr[left]);
            left++;
            index++;
            
        }
        else if(arr[index] == 2)
        {
            swap(arr[index],arr[right]);
            right--;
            //no need of index++
        }
        else
        {
            index++;
        }
        

    }
    
    cout << endl << "After sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
int main()
{
    int arr[7] = {0,1,1,2,0,2,1};
    int size = 7;
    int right = size - 1;
    int left = 0;
    int index = 0;
    sortArray(arr,size,right,left,index);
    return 0;
}