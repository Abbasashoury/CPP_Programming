#include <iostream>

using namespace std;

int main()
{
    int m, n, k;
    int grid[100][100] = {0};

    cin >> m >> n >> k;

    for(int i = 0 ; i < k ; ++i)
    {
        int r, c;
        cin >> r >> c;

        grid[r - 1][c - 1] = -1;
    }

    for(int i = 0 ; i < m ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(grid[i][j] == -1)
                continue;

            for(int x = -1 ; x <= 1 ; x++)
            {
                for(int y = -1 ; y <= 1 ; y++)
                {
                    if(x == 0 && y == 0)
                        continue;

                    int ni = i + x;
                    int nj = j + y;

                    if(ni >= 0 && ni < m && nj >= 0 && nj < n && grid[ni][nj] == -1)
                    {
                        grid[i][j]++;
                    }
                }
            }
        }
    }
    
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(grid[i][j] == -1)
                 cout << "* ";
            else
                 cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}