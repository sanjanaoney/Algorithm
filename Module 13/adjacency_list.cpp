#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
int main()
{
    int n, m;
    cin >> n >> m;
    
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (int j:adj[i])
        {
            cout <<j<< " ";
        }
        cout << endl;
    }
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
int n,e;
cin>>n>>e;
vector<int>adj[n];
for(int i=0;i<e;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
for(int i=0;i<n;i++)
{
    cout<<"Index of "<<i<<": ";
    for(int j=0;j<adj[i].size();j++)
    {
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}*/