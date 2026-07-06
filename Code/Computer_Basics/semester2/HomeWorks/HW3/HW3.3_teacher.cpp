#include <iostream>
using namespace std;

int main()
{
    int n, a[100], maxCount = 0, mostRepeated;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // شمارش تعداد تکرار هر عدد
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                count++;
        if (count > maxCount)
        {
            maxCount = count;
            mostRepeated = a[i];
        }
    }
    cout << "Most repeated number: " << mostRepeated << " (" << maxCount << " times)";
    return 0;
}