#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char ch[],int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        if (ch[start] == ch[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
        
        
    }
    return true;
}
int main()
{
    char ch[100];
    cin.getline(ch,100);
    int length = strlen(ch);
    bool valid = checkPalindrome(ch,length);
    if (valid)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
    
    
    return 0;
}