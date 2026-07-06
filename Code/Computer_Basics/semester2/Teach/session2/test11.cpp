#include <iostream>
using namespace std;
int main()
{
    // conditional operator (?:)
    int a, b, c;
    cout << "Enter 3 number:" << endl;
    cin >> a >> b >> c;
    int max;
    max = ((a > b) ? (a > c ? a : c) : (b > c ? b : c));
    cout << "max= " << max;
    return 0;
}