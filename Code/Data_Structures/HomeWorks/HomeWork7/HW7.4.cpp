#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int> &arr, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void insertionSort(vector<int> &arr)
{
    if (arr.empty())
        return;
    insertionSort(arr, 0, (int)arr.size() - 1);
}

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];

    for (int t = 0; t < (int)temp.size(); t++)
        arr[left + t] = temp[t];
}
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
void mergeSort(vector<int> &arr)
{
    if (arr.empty())
        return;
    mergeSort(arr, 0, (int)arr.size() - 1);
}

const int THRESHOLD = 16;

void hybridSort(vector<int> &arr, int left, int right)
{
    int size = right - left + 1;

    if (size <= THRESHOLD)
    {
        cout << "[Hybrid] size=" << size << " -> choosing Insertion Sort\n";
        insertionSort(arr, left, right);
        return;
    }

    cout << "[Hybrid] size=" << size << " -> choosing Merge Sort\n";
    int mid = left + (right - left) / 2;
    hybridSort(arr, left, mid);
    hybridSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
void hybridSort(vector<int> &arr)
{
    if (arr.empty())
        return;
    hybridSort(arr, 0, (int)arr.size() - 1);
}
void printArray(const vector<int> &arr, int limit = 20)
{
    int n = min((int)arr.size(), limit);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    if ((int)arr.size() > limit)
        cout << "...";
    cout << "\n";
}
void runTest(const string &testName, vector<int> original)
{
    cout << "\n--- " << testName << " ---\n";
    cout << "Original: ";
    printArray(original);

    vector<int> a = original;
    insertionSort(a);
    cout << "Insertion Sort -> ";
    printArray(a);
    cout << "  Correct: " << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << "\n";

    vector<int> m = original;
    mergeSort(m);
    cout << "Merge Sort     -> ";
    printArray(m);
    cout << "  Correct: " << (is_sorted(m.begin(), m.end()) ? "YES" : "NO") << "\n";

    vector<int> h = original;
    hybridSort(h);
    cout << "Hybrid Sort    -> ";
    printArray(h);
    cout << "  Correct: " << (is_sorted(h.begin(), h.end()) ? "YES" : "NO") << "\n";
}

int main()
{
    cout << "================= Algorithm Correctness Tests =================\n";

    runTest("Empty array", {});
    runTest("Single element", {42});
    runTest("Already sorted", {1, 2, 3, 4, 5, 6, 7, 8});
    runTest("Reverse sorted", {9, 8, 7, 6, 5, 4, 3, 2, 1});
    runTest("With duplicates", {5, 3, 5, 1, 3, 5, 1, 2, 2});
    runTest("All identical elements", {7, 7, 7, 7, 7});
    runTest("Mixed sample", {9, 3, 7, 1, 8, 2, 5, 4, 6, 0});

    vector<int> reverseLarge(30);
    for (int i = 0; i < (int)reverseLarge.size(); i++)
        reverseLarge[i] = (int)reverseLarge.size() - i;
    runTest("Larger reverse-sorted array (triggers Merge branch)", reverseLarge);

    vector<int> patternLarge(50);
    for (int i = 0; i < (int)patternLarge.size(); i++)
        patternLarge[i] = (i % 7) * 10 - i;
    runTest("Larger mixed-pattern array (triggers Merge branch)", patternLarge);

    cout << "\n================= Tests Finished =================\n";
    return 0;
}