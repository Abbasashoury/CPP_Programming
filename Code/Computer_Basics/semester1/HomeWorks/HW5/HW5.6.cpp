#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of players and the current turn: ";
    cin >> n >> k;

    // The turn number when it’s the original player's turn again
    int turns = (k % n) == 0 ? n : (k % n);
    cout << "The original player's turn again in: " << turns << " turns." << endl;
    return 0;
}
