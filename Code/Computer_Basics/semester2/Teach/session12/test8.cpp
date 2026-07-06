#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    int freq[256] = {0}; // For All Character (ASCII)

    for (char c : input)
    {
        freq[(unsigned char)c]++;// کاراکتر به عدد
    }

    cout << "\nCharacter frequencies:\n";
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << "'" << (char)i << "' : " << freq[i] << endl;//عدد به کاراکتر
        }
    }

    return 0;
}
