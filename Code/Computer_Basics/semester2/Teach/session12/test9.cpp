#include <iostream>
#include <string>
using namespace std;

int main()
{
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    // find (.) position
    size_t dotPos = paragraph.find('.'); // size_t is long long unsigned int
    
    // size_t endPos = paragraph.find_first_of(".!?");****************اگه دنبال چند تا کاراکتر بودی************

    if (dotPos != string::npos) // string::npos is not found position in the string (-1)
    {
        string firstSentence = paragraph.substr(0, dotPos + 1);
        cout << "First sentence: " << firstSentence << endl;
    }
    else
    {
        cout << "No sentence-ending punctuation found. Full input: " << paragraph << endl;
    }

    return 0;
}
