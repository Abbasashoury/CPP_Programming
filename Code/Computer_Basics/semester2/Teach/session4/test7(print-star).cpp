#include <iostream>
using namespace std;
/*
int main()
{
  for (int k = 1; k <= 5; k++)
  {
    for (int i = 1; i <= k; i++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
*/

int main()
{
    for (int i = 0; i < 9; i++) // سطرها
    {
        for (int j = 0; j < 9; j++) // ستون ها
        {
            if (i == 0 || i == 8 || j == 0 || j == 8)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "    ";

        for (int j = 0; j < 9; j++)
        {
            if ((i == 0 || i == 8) && (j >= 3 && j <= 5))
            {
                cout << "*";
            }
            else if ((i == 1 || i == 7) && (j == 2 || j == 6))
            {
                cout << "*";
            }
            else if ((i >= 2 && i <= 6) && (j == 1 || j == 7))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "    ";

        for (int j = 0; j < 9; j++)
        {
            if (i <= 2 && j >= 4 - i && j <= 4 + i)
            {
                cout << "*";
            }
            else if (i > 2 && j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "    ";
        for (int j = 0; j < 9; j++)
        {
            if (i <= 4 && (j == 4 - i || j == 4 + i))
            {
                cout << "*";
            }
            else if (i > 4 && (j == i - 4 || j == 12 - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}