#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (j+1 < size && vec[j] > vec[j+1]) //change < to > to make decreasing order
            {
                swap(vec[j],vec[j+1]);
            }
            
        }
        
    }
    
}
void print(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    
}
int main()
{
    vector<int> vec = {5,4,3,2,1};
    bubbleSort(vec);
    print(vec);
    return 0;
}