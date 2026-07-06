#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrices: ";
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n)), B(n, vector<int>(n)), C(n, vector<int>(n, 0));

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    // Matrix multiplication
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Calculate determinant (for 2x2)
    int det = (C[0][0] * C[1][1] - C[0][1] * C[1][0]);
    cout << (det % 2 == 0 ? "Daniel" : "Farzad") << endl;

    return 0;
}
