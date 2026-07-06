#include <iostream>
#include <string>
#include <cctype>
using namespace std;
// Convert upper to lower and lower to upper
int main()
{
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input);

    for (char &c : input) // by reference****************
    {
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
    }

    cout << "Converted sentence: " << input << endl;

    return 0;
}
