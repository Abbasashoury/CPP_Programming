#include <iostream>
using namespace std;

void SpiralCoordinates(int n, int &x, int &y)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i <= n; i++) //******/
    {
        int j = i;
        if (j >= 4)
        {
            j = j % 4;
        }

        switch (j)
        {
        case 0:
        {
            x = -x;
            break;
        }
        case 1:
        {
            y = -y;
            break;
        }
        case 2:
        {
            x = -x;
            x++;
            break;
        }
        case 3:
        {
            y = -y;
            y++;
            break;
        }
        }
    }
    return;
}

int main()
{
    int n;
    cout << "enter spiral coordinates:";
    cin >> n;

    int x = 0, y = 0;
    SpiralCoordinates(n, x, y);

    cout << "(" << x << "," << y << ")" << endl;

    return 0;
}
