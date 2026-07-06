#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Sort the array
    sort(arr.begin(), arr.end());
    int operations = 0;

    // Increment to make the array non-decreasing
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            operations += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1]; // Update current element
        }
    }

    cout << "Number of operations: " << operations << endl;
    cout << "Transformed array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
