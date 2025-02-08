#include<iostream>
#include<vector>
using namespace std;
int numberFinder(int arr[],int size,int n)
{
    int totalSum = ((n)*(n+1))/2;
    int arrSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrSum += arr[i]; 
    }
    return totalSum - arrSum;
}
int main()
{
    int arr[] = {1,9,6,7,3,2,8,10,4};
    int size = 9;
    int n = 10;
    cout << numberFinder(arr,size,n);
    return 0;
}