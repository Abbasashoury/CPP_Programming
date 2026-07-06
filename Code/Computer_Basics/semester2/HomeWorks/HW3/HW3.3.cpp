#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    string s1 = "MOLANA";
    string s2 = "HAFEZ";
    bool found = false;

    for (int i = 1; i <= 5; ++i)
    {
        getline(cin, line);

        if (line.find(s1) != string::npos || line.find(s2) != string::npos)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << "NOT FOUND!";

    return 0;
}