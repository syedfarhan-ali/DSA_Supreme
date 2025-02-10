#include<iostream>
#include<string.h>
using namespace std;
void reverse(char ch[],int length)
{
    int start = 0;
    int end = length - 1;
    while(start < end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    
}
int findLength(char ch[],int size)
{
    int count = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char ch[100];
    int size = 100;
    cin.getline(ch,100);
    int length = findLength(ch,size);
    reverse(ch,length);
    cout << "reverse is : " << ch;
    return 0;
}