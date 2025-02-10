#include<iostream>
#include<string.h>
using namespace std;
void replaceAt(char ch[],int length)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        
        index++;
    }
    
}
int main()
{
    char ch[100];
    cin.getline(ch,100);
    int length = strlen(ch);
    cout << "Before : " << ch << endl;
    replaceAt(ch,length);
    cout << "After : " << ch;
    return 0;
}