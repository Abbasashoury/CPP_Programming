#include <iostream>

using namespace std;

void printPascalTriangle(int n)
{
    int triangle[100][100]; //********/
    for (int i = 0; i < n; i++)
    {
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++)
        {

            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows for Pascal Triangle: ";
    cin >> n;

    if (n > 0 && n <= 100)
    {
        printPascalTriangle(n);
    }
    else
    {
        cout << "Please enter a number between 1 and 100." << endl;
    }

    return 0;
}