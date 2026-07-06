#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool comeBefore(const string &a, const string &b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

void merge(vector<string> &arr, int l, int m, int r, vector<string> &temp)
{
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r)
    {
        if (comeBefore(arr[i], arr[j]))
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= m)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    for (int x = l; x <= r; x++)
        arr[x] = temp[x];
}

void mergeSort(vector<string> &arr, int l, int r, vector<string> &temp)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m, temp);
    mergeSort(arr, m + 1, r, temp);
    merge(arr, l, m, r, temp);
}

int main()
{
    int n;
    cin >> n;
    vector<string> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<string> temp(n);
    mergeSort(nums, 0, n - 1, temp);

    string result;
    for (int i = 0; i < n; i++)
    {
        result += nums[i];
    }

    int idx = 0;
    while (idx < (int)result.size() - 1 && result[idx] == '0')
    {
        idx++;
    }
    result = result.substr(idx);

    cout << result << endl;

    return 0;
}