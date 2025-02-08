#include<iostream>
using namespace std;
//print all pairs
//(10,10)(20,10)(30,10)
//(10,20)(20,20)(30,20)
//(10,30)(20,30)(30,30)
int main()
{
    int array[] = {10,20,30};
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << array[i] << "," << array[j] << ")" ;
        }
        cout << endl;
    }
    
    return 0;
}