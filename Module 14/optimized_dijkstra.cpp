#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3+5;
const int INF = 1e9+10;
vector<pii> adj[N];
vector<int> d(N, INF);
vector<bool> visited(N, false);

void dijkstra(int s) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[s] = 0;
    pq.push({d[s], s});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for (pii vpair : adj[u]) {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v]) {
                continue;
            }
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }
}

int main() {
    // cout << "Enter the number of nodes and edges:";
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++) {
        cout << "Distance of node " << i << ": ";
        cout << d[i] << endl;
    }
return 0;
}
