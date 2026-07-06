#include <iostream>
using namespace std;

void read(int a[][2], int row)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
}
void show(int a[][2], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << " " << a[i][j];

        cout << endl;
    }
}
void sum(int a[][2], int b[][2], int c[][2], int row)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < 2; j++)
            c[i][j] = a[i][j] + b[i][j];
}
void multiply(int a[][2], int b[][2], int c[][2], int row) //********************************************
{
    for (int i = 0; i < row; i++)       // انتخاب سطر از ماتریس a
        for (int j = 0; j < 2; j++)     // انتخاب ستون از ماتریس b
            for (int k = 0; k < 2; k++) // k در ماتریس اولی ستون و در دومی سطره
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
}
void zeros(int a[][2], int row)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < 2; j++)
            a[i][j] = 0;
}
void transpose_inplace(int a[][2], int row) //**********************************************
{
    // Transpose squre matrix as inplace
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
/*
void transpose_inplace(int a[][100], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

*/
void transpose(int a[3][2], int T[2][3]) //**********************************************
{
    // Transpose matrix in array T
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            T[j][i] = a[i][j];
        }
    }
}
int main()
{
    int r = 2;
    int a[r][2];
    int b[2][2] = {{12, 3}, {4, 67}};
    int c[r][2];

    read(a, r);
    show(a, r);

    sum(a, b, c, r);
    cout << "sum:(c)\n";
    show(c, r);

    zeros(c, r);
    cout << "(c):\n";
    show(c, r);

    cout << "multiply:(c)\n";
    multiply(a, b, c, r);
    show(c, r);

    cout << "b:\n";
    show(b, r);

    transpose_inplace(b, r); // is must be squared matrix
    cout << "Transpose b:\n";
    show(b, r);

    int W[3][2] = {1, 2, 3, 4, 5, 6};
    int T[2][3];
    cout << "w:\n";
    show(W, 3); // چرا آر میفرستیم چون ماتریس هم ارایه است و کامپایلر باید بدونه که چند تا چند تا سطر جدا کنه

    cout << "Transpose w : \n";
    transpose(W, T);
    // show T:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << " " << T[i][j];

        cout << endl;
    }
    return 0;
}