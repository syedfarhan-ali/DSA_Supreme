#include<iostream>
using namespace std;

int main()
{
    int array[8] = {0,0,1,0,1,1,1,1};
    int size = 8;
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
        
        
    }
    cout << "Number of Zeros and Ones are :" << endl;
    cout << "Zeros : " << zeroCount << endl;
    cout << "Ones : " << oneCount;
    return 0;
}