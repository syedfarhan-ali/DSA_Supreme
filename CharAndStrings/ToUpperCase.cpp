#include <iostream>
using namespace std;
void convertToUpper(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currCharacter = ch[index];
        //check if lowercase then convert to uppercase
        if(currCharacter >= 'a' && currCharacter <= 'z')
        {
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
    
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "Before : " << ch << endl;
    convertToUpper(ch);
    cout << "After : " << ch;
    return 0;
}