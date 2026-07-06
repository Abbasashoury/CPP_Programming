#include <iostream>

using namespace std;

void filler(int n, int arr[]);

int main()
{
    int n, max, min;
    int arr[100];

    cout << "Enter the size of the array (n): ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Error: Invalid array size!" << endl;
        return 1;
    }

    cout << "Enter " << n << " elements for the array:\n";

    filler(n, arr);

    cout << "Enter the range (min and max): ";
    cin >> min >> max;

    if (min < 0 || max >= n || min > max)
    {
        cout << "Error: Invalid range!" << endl;
        return 1;
    }



    int i = min, j = max;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }



    cout << "Modified array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void filler(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}