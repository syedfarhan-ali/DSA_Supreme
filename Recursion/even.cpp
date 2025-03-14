#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[], vector<int> &ans, int index, int size){
    if(index >= size){
        return;
    }
    if(arr[index] % 2 == 0){
        ans.push_back(arr[index]);
    }
    solve(arr, ans, index+1,size);
}
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> ans = {};
    int index = 0;
    int size = 10;
    solve(array,ans,index,size);
    for(int num: ans){
        cout << num << " ";
    }
    return 0;
}