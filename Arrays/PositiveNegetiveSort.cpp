#include <iostream>
#include <vector>
using namespace std;
// sort so that +ve numbers go on right side and -ve numbers go on left side
void sort(vector<int> vec, int left, int right)
{
    cout << "before sorting" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    for (int i = 0; i < vec.size(); i++)
    {
        while (left < right)
        {
            if (vec[right] < 0 && vec[left] > 0)
            {
                swap(vec[right], vec[left]);
                right--;
                left++;
            }
            else if (vec[right] > 0 && vec[left] > 0)
            {
                right--;
            }
            else if (vec[right] < 0 && vec[left] < 0)
            {
                left++;
            }
            else
            {
                left++;
                right--;
            }
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
    int left = 0;
    int right = vec.size() - 1;
    sort(vec, left, right);

    return 0;
}