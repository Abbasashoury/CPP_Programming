#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++)
    {
        int u, v = 0;
        cin >> u >> v;

        if (u > v)
            swap(u, v);

        edges.push_back({u, v});
    }

    sort(edges.begin(), edges.end());

    int CheckEdge;
    cin >> CheckEdge;

    for (int i = 0; i < CheckEdge; i++)
    {
        int u, v = 0;
        cin >> u >> v;

        if (u > v)
            swap(u, v);

        if (binary_search(edges.begin(), edges.end(), pair<int, int>{u, v}))
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}