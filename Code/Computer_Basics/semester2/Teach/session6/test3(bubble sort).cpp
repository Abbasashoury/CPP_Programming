#include <iostream>
using namespace std;

void read(int[], int);
void write(int[], int);
void sort(int[], int); // Bubble sort
int main()
{
    int a[5];
    read(a, 5);
    sort(a, 5);
    write(a, 5);
    return 0;
}
void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter Number for a[" << i + 1 << "]:";
        cin >> a[i];
    }
}
void write(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "a[" << i << "]:" << a[i] << endl;
}
void sort(int a[], int n) // bubble sort************************** از آخر به اول مرتب میشه
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
