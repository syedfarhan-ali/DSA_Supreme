#include <iostream>
#include<string.h>
using namespace std;
int findLength(char ch[], int size)
{
    int length = 0;
    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}
int main()
{
    char ch[10];
    int size = sizeof(ch) / sizeof(ch[0]);
    // cin >> ch;
    cin.getline(ch, 10);
    cout << ch;

    cout << endl
         << "Length using findLength is : " << findLength(ch, size) << endl
         << "Length using strlen is : " << strlen(ch) << endl
         << "reversed is : " << strrev(ch);
    return 0;
}