#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//rotate array 90 degrees in place
void rotateArray(vector<vector <int> > &vec){
    //transpose
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i; j < vec[i].size(); j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
        
    }
    //reverse
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            reverse(vec[i].begin(),vec[i].end());
        }   
    }
    
}
int main()
{
    vector<vector<int> > vec = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "before rotate" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    rotateArray(vec);
    cout << "After rotate" <<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}