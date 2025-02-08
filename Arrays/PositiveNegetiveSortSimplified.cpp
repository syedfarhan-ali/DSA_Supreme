#include <iostream>
#include <vector>
using namespace std;
// sort so that +ve numbers go on right side and -ve numbers go on left side
void sort(vector<int> vec,int j)
{
    cout << "before sorting" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    for (int index = 0; index < vec.size(); index++)
    {
        if (vec[index] < 0)
        {
            swap(vec[index],vec[j]);
            j++;
        }
       
        
    }

    cout << endl
         << "after sorting" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
int main()
{
    vector<int> vec = {23, -7, 12, -10, -11, 40, 60};
    int j = 0;
    sort(vec, j);

    return 0;
}