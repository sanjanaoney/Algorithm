#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<pair<int,int>>q;
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    q.push_back({u,v});
}
for(int i=0;i<q.size();i++)
{
cout<<q[i].first<<" "<<q[i].second<<endl;
}
    return 0;
}