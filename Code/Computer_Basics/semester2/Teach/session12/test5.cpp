#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
// Convert to Uppercase
int main()
{
    char s[] = "ABcdEfG";
    int len = strlen(s);
    cout << "length of s: " << len << endl;

    char s2[100] = ""; 

    for(int i = 0; i < len; i++)
    {
        char upperChar[2]; // null terminator
        upperChar[0] = toupper(s[i]);
        upperChar[1] = '\0';

        strcat(s2, upperChar);
    }

    cout << "Uppercase string: " << s2 << endl;

    return 0;
}