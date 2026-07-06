#include <iostream>

using namespace std;

int fact(int n)
{
    int i; int res = 1;

    for (i = 1; i <= n; i++)
        res = res * i;

    return res;
}

int main()
{
    int i, j, n, ress;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            ress = fact(i) / (fact(i - j) * fact(j));
            cout << ress;

            if (i != j)
                cout << " ";
        }
        cout << '\n';
    }
    return 0;
}