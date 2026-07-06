#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countUniqueChars(const string &s)
{
    bool seen[256] = {false}; //********
    int count = 0;
    for (char ch : s)
    {
        if (!seen[(unsigned char)ch])       //*********
            seen[(unsigned char)ch] = true; //*********
        count++;                            //*********
    }

return count;
}

int main()
{
    int n;
    cin >> n;
    vector<string> names(n); //*********
    for (int i = 0; i < n; ++i)
        cin >> names[i];

    int maxUnique = 0;
    for (const auto &name : names) // تغیر نمکنه رفرنس هم هست اتوماتیک نوع متغبر نیم رو تشخیص میده و نیم هم یه متغیره که توی وکتور نیمز میچرخه
    {
        int uniqueCount = countUniqueChars(name);
        if (uniqueCount > maxUnique)
            maxUnique = uniqueCount;
    }

    cout << maxUnique << endl;
    return 0;
}