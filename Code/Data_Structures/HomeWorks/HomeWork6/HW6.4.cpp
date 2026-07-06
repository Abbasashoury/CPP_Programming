#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main()
{
    const int Max_nodes = 2000;
    int n, m;
    cin >> n >> m;

    vector<bitset<Max_nodes>> neighbors(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        neighbors[u].set(v);
        neighbors[v].set(u);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((neighbors[i] & neighbors[j]).count() >= 3)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}