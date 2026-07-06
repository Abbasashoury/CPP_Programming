#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
void quickSort(vector<int> &arr)
{
    if (arr.empty())
        return;
    quickSort(arr, 0, (int)arr.size() - 1);
}

int getMax(const vector<int> &arr)
{
    int mx = arr[0];
    for (int x : arr)
        if (x > mx)
            mx = x;
    return mx;
}
void countingSortByDigit(vector<int> &arr, int exp)
{
    int n = (int)arr.size();
    vector<int> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    arr = output;
}
void radixSort(vector<int> &arr)
{
    if (arr.empty())
        return;

    int mx = getMax(arr);

    for (int exp = 1; mx / exp > 0; exp *= 10)
        countingSortByDigit(arr, exp);
}

int numberOfDigits(int num)
{
    if (num == 0)
        return 1;
    int digits = 0;
    while (num > 0)
    {
        digits++;
        num /= 10;
    }
    return digits;
}
const int SIZE_THRESHOLD = 100000;
const int DIGIT_THRESHOLD = 5;

void hybridSort(vector<int> &arr)
{
    if (arr.size() <= 1)
        return;

    bool hasNegative = false;
    for (int x : arr)
    {
        if (x < 0)
        {
            hasNegative = true;
            break;
        }
    }

    if (hasNegative)
    {
        cout << "[Hybrid] Array contains negative numbers -> choosing Quick Sort\n";
        quickSort(arr);
        return;
    }

    int mx = getMax(arr);
    int digits = numberOfDigits(mx);

    bool chooseRadix = (arr.size() <= SIZE_THRESHOLD) || (digits <= DIGIT_THRESHOLD);

    if (chooseRadix)
    {
        cout << "[Hybrid] size=" << arr.size()
             << ", digits=" << digits
             << " -> choosing Radix Sort\n";
        radixSort(arr);
    }
    else
    {
        cout << "[Hybrid] size=" << arr.size()
             << ", digits=" << digits
             << " -> choosing Quick Sort\n";
        quickSort(arr);
    }
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
void runTest(const string &testName, vector<int> original, bool skipRadix = false)
{
    cout << "\n--- " << testName << " ---\n";
    cout << "Original: ";
    printArray(original);

    vector<int> q = original;
    quickSort(q);
    cout << "Quick Sort  -> ";
    printArray(q);
    cout << "  Correct: " << (is_sorted(q.begin(), q.end()) ? "YES" : "NO") << "\n";

    if (!skipRadix)
    {
        vector<int> r = original;
        radixSort(r);
        cout << "Radix Sort  -> ";
        printArray(r);
        cout << "  Correct: " << (is_sorted(r.begin(), r.end()) ? "YES" : "NO") << "\n";
    }
    else
    {
        cout << "Radix Sort  -> skipped (array has negative numbers)\n";
    }

    vector<int> h = original;
    hybridSort(h);
    cout << "Hybrid Sort -> ";
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
    runTest("Mixed sample", {170, 45, 75, 90, 802, 24, 2, 66});
    runTest("Large numbers, small array (still picks Radix)", {123456, 7, 98765432, 1000, 999999999, 42});

    mt19937 rng(12345);
    uniform_int_distribution<int> dist(0, 2000000000);
    vector<int> bigArr(150000);
    for (int i = 0; i < (int)bigArr.size(); i++)
        bigArr[i] = dist(rng);
    runTest("Large array, many digits (should pick Quick Sort)", bigArr);

    runTest("With negative numbers", {5, -3, 10, -1, 0, 8, -7}, /*skipRadix=*/true);

    cout << "\n================= Tests Finished =================\n";
    return 0;
}