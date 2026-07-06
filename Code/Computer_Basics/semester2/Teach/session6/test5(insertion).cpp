
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr; // لیست اعداد
    int n;

    cout << "inter the number to insert or exit(-1)\n";
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;

        // پیدا کردن جای درست عدد
        int pos = 0;
        while (pos < arr.size() && arr[pos] < n)
        {

            pos++;
        }

        // قرار دادن عدد در جای مناسب
        arr.insert(arr.begin() + pos, n);

        // نمایش لیست مرتب
        cout << "sorted list: ";
        for (int x : arr)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}

/*
int main()
{
    const int MAX = 100; // حداکثر تعداد عدد
    int arr[MAX];        // آرایه
    int size = 0;        // تعداد فعلی عناصر
    int n;

    cout << "inter the number to insert or exit(-1)\n";
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;

        // پیدا کردن جای مناسب
        int pos = 0;
        while (pos < size && arr[pos] < n)
        {
            pos++;
        }

        // جابه‌جایی عناصر برای خالی کردن جا
        for (int i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1]; // توجه داشته باش که i برابر سایزه یعنی یکی بیشتز از خونه اخر
        }

        // قرار دادن عدد در جای مناسب
        arr[pos] = n;
        size++;

        // نمایش آرایه مرتب
        cout << "sorted list: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/
