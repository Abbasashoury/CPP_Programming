#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <iomanip>

using namespace std;

const double INF = 1e15;
const double EPS = 1e-11;

struct Edge
{
    int to;
    int cap;
    int flow;
    double cost;
    int rev;
};

vector<vector<Edge>> adj;
vector<double> dist;
vector<double> potential;
vector<int> parent_node;
vector<int> parent_edge;

void add_edge(int from, int to, int cap, double cost)
{
    adj[from].push_back({to, cap, 0, cost, (int)adj[to].size()});
    adj[to].push_back({from, 0, 0, -cost, (int)adj[from].size() - 1});
}
bool dijkstra(int s, int t, int n_nodes)
{
    dist.assign(n_nodes, INF);
    parent_node.assign(n_nodes, -1);
    parent_edge.assign(n_nodes, -1);

    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;

    dist[s] = 0.0;
    pq.push({0.0, s});

    while (!pq.empty())
    {
        pair<double, int> top_element = pq.top();
        double d = top_element.first;
        int u = top_element.second;
        pq.pop();

        if (d > dist[u] + EPS)
            continue;

        for (size_t i = 0; i < adj[u].size(); ++i)
        {
            const auto &edge = adj[u][i];

            if (edge.cap - edge.flow > 0)
            {

                double reduced_cost = edge.cost + potential[u] - potential[edge.to];

                if (dist[edge.to] > dist[u] + reduced_cost + EPS)
                {
                    dist[edge.to] = dist[u] + reduced_cost;
                    parent_node[edge.to] = u;
                    parent_edge[edge.to] = i;
                    pq.push({dist[edge.to], edge.to});
                }
            }
        }
    }
    return dist[t] < INF - EPS;
}

pair<int, double> min_cost_max_flow(int s, int t, int n_nodes)
{
    potential.assign(n_nodes, 0.0);
    int max_flow = 0;
    double min_cost = 0.0;

    while (dijkstra(s, t, n_nodes))
    {
        for (int i = 0; i < n_nodes; ++i)
        {
            if (dist[i] < INF - EPS)
            {
                potential[i] += dist[i];
            }
        }

        int bottleneck = 2e9;

        for (int v = t; v != s; v = parent_node[v])
        {
            int u = parent_node[v];
            int idx = parent_edge[v];
            bottleneck = min(bottleneck, adj[u][idx].cap - adj[u][idx].flow);
        }

        for (int v = t; v != s; v = parent_node[v])
        {
            int u = parent_node[v];
            int idx = parent_edge[v];

            adj[u][idx].flow += bottleneck;
            adj[v][adj[u][idx].rev].flow -= bottleneck;
        }

        max_flow += bottleneck;

        min_cost += bottleneck * potential[t];
    }

    return make_pair(max_flow, min_cost);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, n;
    if (!(cin >> j))
        return 0;

    vector<int> h(j);
    for (int i = 0; i < j; ++i)
    {
        cin >> h[i];
    }

    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> m[i];
    }

    int source = 0;
    int sink = j + n + 1;
    int n_nodes = sink + 1;
    adj.resize(n_nodes);

    for (int i = 0; i < j; ++i)
    {
        add_edge(source, i + 1, h[i], 0.0);
    }

    for (int k = 0; k < n; ++k)
    {
        add_edge(j + 1 + k, sink, m[k], 0.0);
    }

    for (int i = 0; i < j; ++i)
    {
        for (int k = 0; k < n; ++k)
        {
            int capability;
            cin >> capability;

            double cost = 1.0 / capability;
            add_edge(i + 1, j + 1 + k, 2e9, cost);
        }
    }

    pair<int, double> result = min_cost_max_flow(source, sink, n_nodes);
    double total_hours = result.second;

    cout << fixed << setprecision(13) << total_hours << endl;

    return 0;
}