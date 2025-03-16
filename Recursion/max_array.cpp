#include<iostream>
#include<limits.h>
using namespace std;
void maximum(int arr[],int size,int index,int &maxi){
    if(index >= size){
        return;
    }
    maxi = max(maxi,arr[index]);
    maximum(arr,size,++index,maxi);
    return;
}
int main()
{
    int array[5] = {50,40,30,20,10};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    maximum(array,size,index,maxi);
    cout << "The answer is : " << maxi;
    return 0;
}