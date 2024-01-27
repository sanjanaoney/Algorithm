/*#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        //cout<<"Visiting node:"<<u<<endl;
        for(char v:adj[u])
        {
            if(visited[v]==true)
            {
                continue;
            }
            cout<<"Yes";
            q.push(v);
            visited[v]=true;
           
        }
         
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        char u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
} */

/* #include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Uncomment the line below if you want to print the visited nodes
        // cout << "Visiting node: " << u << endl;

        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Assuming S and D are the source and destination nodes
   char s, d;
    cin >> s >> d;

    bfs(s);

    if (visited[d]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}*/



