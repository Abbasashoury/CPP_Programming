#include <iostream>
using namespace std;

void printDiamonds(int n) {
    int totalLines = n;
    for (int i = 0; i < totalLines / 2 + 1; i++) {
        cout << string(totalLines / 2 - i, ' ') << string(2 * i + 1, '*') << string(2, ' ') << string(2 * i + 1, '*') << endl;
    }
    for (int i = totalLines / 2 - 1; i >= 0; i--) {
        cout << string(totalLines / 2 - i, ' ') << string(2 * i + 1, '*') << string(2, ' ') << string(2 * i + 1, '*') << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printDiamonds(n);
    return 0;
}
