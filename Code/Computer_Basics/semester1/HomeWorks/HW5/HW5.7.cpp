#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "Enter the value of k: ";
    cin >> k;

    // Sort in descending order and find the k-th largNumest
    sort(arr.rbegin(), arr.rend());
    cout << "The " << k << "-th largNumest element is: " << arr[k - 1] << endl;

    return 0;
}
