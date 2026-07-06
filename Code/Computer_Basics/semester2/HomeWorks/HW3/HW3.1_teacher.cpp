#include <iostream>
using namespace std;

int main()
{
    int n, m, a[100], b[100], c[100], k = 0;

    cout << "Enter size of array a: ";
    cin >> n;
    cout << "Enter elements of array a:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of array b: ";
    cin >> m;
    cout << "Enter elements of array b:\n";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // جستجوی عناصر مشترک بدون تکرار
    for (int i = 0; i < n; i++)
    {

        // اول بررسی کن که a[i] قبلاً در c نباشد
        bool alreadyInC = false;
        for (int t = 0; t < k; t++)
            if (c[t] == a[i])
                alreadyInC = true;
        if (alreadyInC)
            continue;

        // حالا بررسی کن که a[i] در b هست یا نه
        for (int j = 0; j < m; j++)
            if (a[i] == b[j])
            {
                c[k++] = a[i];
                break;
            }
    }

    cout << "Common elements:\n";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";
    return 0;
}