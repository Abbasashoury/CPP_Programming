#include <iostream>

using namespace std;

void readArray(int arr[], int size)
{
    cout << "Enter 10 numbers:";

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
}

void unionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize)
{
    resultSize = 0;

    for (int i = 0; i < size1; ++i)
    {
        bool found = false;
        for (int j = 0; j < resultSize; ++j)
        {
            if (arr1[i] == result[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            result[resultSize++] = arr1[i];
        }
    }

    for (int i = 0; i < size2; ++i)
    {
        bool found = false;
        for (int j = 0; j < resultSize; ++j) 
        {
            if (arr2[i] == result[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            result[resultSize++] = arr2[i];
        }
    }
}

void intersectionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize)
{
    resultSize = 0;

    for (int i = 0; i < size1; ++i) 
    {
        for (int j = 0; j < size2; ++j) 
        {
            if (arr1[i] == arr2[j]) 
            {
                bool found = false;
                for (int k = 0; k < resultSize; ++k) 
                {
                    if (arr1[i] == result[k])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    result[resultSize++] = arr1[i];
                }
            }
        }
    }
}

void differenceArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize) 
{
    resultSize = 0;

    for (int i = 0; i < size1; ++i)
    {
        bool found = false;
        for (int j = 0; j < size2; ++j) 
        {
            if (arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }
        if (!found) 
        {
            result[resultSize++] = arr1[i];
        }
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    const int SIZE = 10;
    int arr1[SIZE], arr2[SIZE], unionResult[2 * SIZE], intersectionResult[SIZE], differenceResult[SIZE];
    int unionSize, intersectionSize, differenceSize;

    readArray(arr1, SIZE);
    readArray(arr2, SIZE);

    unionArrays(arr1, SIZE, arr2, SIZE, unionResult, unionSize);
    intersectionArrays(arr1, SIZE, arr2, SIZE, intersectionResult, intersectionSize);
    differenceArrays(arr1, SIZE, arr2, SIZE, differenceResult, differenceSize);

    cout << "( arr1 / arr2 ): ";
    printArray(unionResult, unionSize);

    cout << "( arr1 & arr2 ): ";
    printArray(intersectionResult, intersectionSize);

    cout << "( Arr1 - arr2 ): ";
    printArray(differenceResult, differenceSize);

    return 0;
}