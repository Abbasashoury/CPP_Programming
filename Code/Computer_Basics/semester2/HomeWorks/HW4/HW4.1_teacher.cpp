#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, a[100];
    cout << "Enter n: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Array must have at least 2 elements.\n";
        return 1;
    }

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2 && a[i] > min1)
        {
            min2 = a[i];
        }
    }

    if (min2 == INT_MAX)
        cout << "No second minimum found (all elements might be equal).\n";
    else
        cout << "Second minimum: " << min2 << endl;

    return 0;
}