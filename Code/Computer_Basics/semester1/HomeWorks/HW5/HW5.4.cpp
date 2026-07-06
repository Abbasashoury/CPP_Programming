#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of markers: ";
    cin >> N;
    vector<int> colors(N);
    unordered_map<int, int> colorCount;

    cout << "Enter the colors of the markers:\n";
    for(int i = 0; i < N; i++) {
        cin >> colors[i];
        colorCount[colors[i]]++;
    }

    int minColor = -1, minCount = N + 1; // Considering max possible markers
    for (auto& pair : colorCount) {
        if (pair.second < minCount) {
            minCount = pair.second;
            minColor = pair.first;
        }
    }
    
    cout << "Color with minimum count: " << minColor << endl;
    return 0;
}
