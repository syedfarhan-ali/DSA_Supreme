#include<iostream>
using namespace std;
//print all triplets

int main()
{
    int array[] = {1,2,3,4,5};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << "(" << array[i] << "," << array[j] << ","<< array[k] << ")" ;
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}