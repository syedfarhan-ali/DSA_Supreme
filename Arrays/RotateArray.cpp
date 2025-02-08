#include<iostream>
#include<vector>
using namespace std;
//rotate array k steps
void rotateArray(vector<int> &vec,int k)
{
   int size = vec.size();
   vector<int> ans(size);
   for (int index = 0; index < size; index++)
   {
        int newIndex = (index+k)%size;
        ans[newIndex] = vec[index];
   }
   vec = ans;
   
}
int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    int k = 2;
    rotateArray(vec,k);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] <<" ";
    }
    
    return 0;
}