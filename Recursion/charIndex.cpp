//HW
//b a b b a print all indexes of b
#include<iostream>
using namespace std;
void printIndex(char arr[],int size,int index){
    if(index >= size){
        return;
    }

    if(arr[index] == 'b'){
        cout << index << " ";
    }
    printIndex(arr,size,++index);
}
int main()
{
    char array[5] = {'b','a','b','b','a'};
    int size = 5;
    int index = 0;
    printIndex(array,size,index);
    return 0;
}
