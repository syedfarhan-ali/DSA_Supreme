#include<iostream>
using namespace std;
//sort for that 0s come first then 1s and 2s
void sortArray(int arr[],int size){
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    cout << "Before sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    for (int index = 0; index < size; index++)
    {
        if (arr[index] == 0)
        {
            zeros++;
        }
        else if (arr[index] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }     
    }
    for (int i = 0; i < size; i++)
    {
        if (zeros)
        {
            arr[i] = 0;
            zeros--;
        }
        else if (ones)
        {
            arr[i] = 1;
            ones--;
        }
        else if(twos)
        {
            arr[i] = 2;
            twos--;
        }
        
        
    }
    cout << "After sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
int main()
{
    int arr[7] = {0,1,1,2,0,2,1};
    int size = 7;
    sortArray(arr,size);
    return 0;
}