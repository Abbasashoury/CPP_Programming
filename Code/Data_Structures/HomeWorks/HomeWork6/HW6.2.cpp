#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool has_0 = false;
    bool has_1 = false;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 0)
            has_0 = true;
        else
            has_1 = true;
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
    }

    if (has_0 && has_1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}