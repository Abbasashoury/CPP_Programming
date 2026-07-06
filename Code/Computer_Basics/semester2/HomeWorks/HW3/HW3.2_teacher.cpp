#include <iostream>
using namespace std;

int main()
{
    int a[20], b[20], c[40];
    cout << "Enter 20 sorted elements for array a:\n";
    for (int i = 0; i < 20; i++)
        cin >> a[i];

    cout << "Enter 20 sorted elements for array b:\n";
    for (int i = 0; i < 20; i++)
        cin >> b[i];

    int i = 0, j = 0, k = 0;
    // ادغام دو آرایه مرتب با حذف تکراری‌ها
    while (i < 20 && j < 20)
    {
        if (a[i] < b[j])
        {
            if (k == 0 || c[k - 1] != a[i]) // فقط اگر تکراری نبود اضافه کن
                c[k++] = a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            if (k == 0 || c[k - 1] != b[j])
                c[k++] = b[j];
            j++;
        }
        else
        { // اگر مساوی بودند، فقط یکی را اضافه کن
            if (k == 0 || c[k - 1] != a[i])
                c[k++] = a[i];
            i++;
            j++;
        }
    }
    while (i < 20)
    {
        if (k == 0 || c[k - 1] != a[i])
            c[k++] = a[i];
        i++;
    }
    while (j < 20)
    {
        if (k == 0 || c[k - 1] != b[j])
            c[k++] = b[j];
        j++;
    }
    
    cout << "Merged sorted array with remove duplicates:\n";
    for (int t = 0; t < k; t++)
        cout << c[t] << " ";
    return 0;
}
