#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row*col;

    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currNumber = matrix[rowIndex][colIndex];

        if(target == currNumber)
            return true;
        else if(target > currNumber)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return false;
}

int main()
{
    int target = 60;
    vector<vector<int> > vec = {{{1,3,5,7},{10,11,16,20},{23,30,34,60}}};
    cout << searchMatrix(vec,target);
    return 0;
}