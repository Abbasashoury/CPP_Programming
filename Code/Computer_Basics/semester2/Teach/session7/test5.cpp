#include <iostream>
using namespace std;
// find Second Largest Element in array
void read(int[], int n);
void write(int[], int n);
void find_max2(int[], int);

int main()
{

    int B[6];

    int size_B = sizeof(B) / sizeof(int);

    read(B, size_B);

    find_max2(B, size_B);
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
void find_max2(int a[], int n) //************************************** */
{
    int first = -100000, second = -100000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] < first)
            second = a[i];
    }
    cout << "Second Largest Element in Array:" << second;
}
