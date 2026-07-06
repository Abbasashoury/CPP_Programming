#include <iostream>
#include <cctype>
#include <string>
using namespace std;
// Convert to Uppercase using string
int main()
{
    string s = "ABcdEfG";
    string s2 = "";

    for (char c : s)
    {
        s2 += toupper(c);
    }

    cout << "Uppercase string: " << s2 << endl;
    return 0;
}
