#include<iostream>
using namespace std;
int findOddOccuringElement(int arr[],int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(start == end)
        {
            return start;
        }
        if(mid & 1)
        {
            if(mid - 1 >= 0 && arr[mid - 1] == arr[mid])
            {
                start = mid + 1; 
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if(mid + 1 < size && arr[mid] == arr[mid+1])
            {
                start = mid + 2;
            }
            else
            {
                //ya to me right part pe khada hu 
                //ya fir answer ke upper hu
                //iss liye end = mid kar raha hu taki answer skip na jo jye 
                end = mid;
            }
            
        }
        mid = start + (end - start)/2;
        
    }
    return -1;
}
int main()
{
    int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
    int size = 13;
    int ansIndex = findOddOccuringElement(arr,size);
    cout << "Final answer is : " << arr[ansIndex];
    return 0;
}