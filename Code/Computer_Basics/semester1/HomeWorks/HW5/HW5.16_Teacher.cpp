#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void find(int arr[], int size)
{
    int max = arr[size - 1];
    int min = arr[0];
    int median = (arr[4] + arr[5]);

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Median value: " << (float)median/2 << endl;
}

int main()
{
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        cout << "[" << i + 1 << "]:";
        cin >> arr[i];
    }

    bubbleSort(arr, size);
    find(arr, size);

    return 0;
}