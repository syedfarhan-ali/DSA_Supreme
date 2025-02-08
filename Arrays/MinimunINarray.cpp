#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int array[5] = {20,4, 2, 1, -51};
    int min = INT_MAX;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min) 
        {
            min = array[i];
        }
        
    }
    cout << min;
    return 0;
}