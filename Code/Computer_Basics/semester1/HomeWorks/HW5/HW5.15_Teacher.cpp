#include <iostream>

using namespace std;

void makeArray(int num, int i, int Array[])
{
    Array[i] = num;
}

int search(int m, int Array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (Array[i] == m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int SIZE = 10;
    int n, m, Array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "[" << i + 1 << "]:";
        cin >> n;
        makeArray(n, i, Array);
    }

    cout << "Enter the value to search: ";
    cin >> m;

    int x = search(m, Array, SIZE);

        if (x >= 0)
            cout << x;
        else
            cout << "-1";

    return 0;
}