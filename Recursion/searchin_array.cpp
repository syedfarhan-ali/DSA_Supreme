#include<iostream>
using namespace std;
bool searchArray(int arr[],int size,int target,int index){
    if(index >= size){
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    
        
    bool aageKaAns = searchArray(arr,size,target,++index);
    
    return aageKaAns;
}
int main()
{
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int target = 50;
    int index = 0;
    bool ans = searchArray(array,size,target,index);
    if(ans){
        cout << "Target Found : " << target;
    }
    else
    {
        cout << "Target not found";
    }
    

    return 0;
}