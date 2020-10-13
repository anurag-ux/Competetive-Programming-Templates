#include <bits/stdc++.h>

using namespace std;

#define MAX 1000005
#define INF 1000000000
#define fo(i,x) for(int i=0;i<x;i++)
#define ll long long int
#define inp(n) vector<ll> a (n); fo(i,n) cin>>a[i];
#define out(a,n) fo(i,n) cout<<a[i]<<" ";
#define GraphUNW(n) vector<int> adj[n+1];
#define addEdgeDirect(adj,u,v){adj[u].push_back(v);}
#define addEdgeUnDirect(adj,u,v){adj[u].push_back(v); adj[v].push_back(u);}
#define dfs(adj,n){DFS(adj,v)};
#define Case() ll t; cin >> t; fo(i,t){ solve();}
#define io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Edge {
    int w = INF, to = -1;
};

void solve();

int main()
{
	io(); Case();
}

void solve()
{
	
}

void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    for (int i=0; i<(int)adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 

void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
}
