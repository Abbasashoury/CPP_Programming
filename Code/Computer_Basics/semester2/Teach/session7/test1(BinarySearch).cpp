#include <iostream>
using namespace std;
void read(int[], int n);
void write(int[], int n);
void sort(int[], int);
int L_search(int[], int, int);
int B_search(int[], int, int);

int main()
{
    int A[] = {2, 6, 8, 7, 90};
    int B[6];
    int x;
    int size_B = sizeof(B) / sizeof(int);///**************

    read(B, size_B);

    cout << "Enter number for search:";
    cin >> x;
    int r = L_search(B, size_B, x);
    if (r == -1)
    {
        cout << "\nNumber not Found!";
    }
    else
    {
        cout << " Number Founded in  index[" << r << "]\n";
    }

    sort(B, size_B);

    cout << "Enter number for search using method binary search:";
    cin >> x;
    r = B_search(B, size_B, x);
    if (r == -1)
    {
        cout << "\nNumber not Found!";
    }
    else
    {
        cout << " Number Founded in  index[" << r << "]\n";
    }

    write(B, size_B);

    return 0;
}

void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number B[" << i << "]:";
        cin >> a[i];
    }
}
void write(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
}
void sort(int a[], int n)//bubble sort
{
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}
int L_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
            return i;
    }
    return -1;
} 
int B_search(int a[], int n, int x)// binary search *********************************************************************
{
    int l = 0, h = n - 1, m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (x == a[m])
            return m;
        else if (x > a[m])
            l = m + 1;
        else
            h = m - 1;
    }
    return -1;
}