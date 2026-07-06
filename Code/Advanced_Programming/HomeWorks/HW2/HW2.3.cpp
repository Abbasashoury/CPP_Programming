#include <iostream>
using namespace std;

double CalAverage(int size, int *arr)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
        sum += *(arr + i);

    return sum / size;
}

void RevArray(int size, int *arr)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + ((size - 1) - i));
        *(arr + ((size - 1) - i)) = temp;
    }
}

int *Resize(int size, int *arr)
{
    int newSize = size * 2;
    int *newArr = new int[newSize];

    for (int i = 0; i < newSize; i++)
    {
        if (i < size)
            *(newArr + i) = *(arr + i);
        else
            *(newArr + i) = 0;
    }
    delete[] arr;
    return newArr;
}

int main()
{
    int size;
    cout << "Enter size of array:\n";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);

    double avg = CalAverage(size, arr);
    cout << "__________________________\n"
         << "Average = " << avg << "\n";

    RevArray(size, arr);
    cout << "Array reversed:\n";
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << "||";
    cout << "\n";

    arr = Resize(size, arr);
    cout << "Array resized to (" << size * 2 << ") elements:\n";
    for (int i = 0; i < size * 2; i++)
        cout << *(arr + i) << "||";
    cout << "\n___________________________";

    delete[] arr;
    return 0;
}
