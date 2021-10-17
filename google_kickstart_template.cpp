#include <bits/stdc++.h>

using namespace std;

#define MAX 2147483646
#define MIN -2147483646
#define INF 1000000000

#define ll long long int
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

#define inp(n) vector<ll> a (n); FOR(i,n) cin>>a[i];
#define out(a) FOR(i,sz(a)) {cout<<a[i]<<" ";} cout<<endl;
#define Graph(n) vt<int> graph[n+1];
#define addEdgeDirect(adj,u,v){adj[u].push_back(v);}
#define addEdgeUnDirect(adj,u,v){adj[u].push_back(v); adj[v].push_back(u);}
#define dfs(adj,n){DFS(adj,v)};
#define Case() int t; cin >> t; FOR(i,t) {cout<<"Case #"<<i+1<<": ";solve();}
#define io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Edge {
    int w = INF, to = -1;
};

void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    
    FOR(sz(adj[u])) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 

void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    FOR(u,V)
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
}

void solve();

int main()
{
	io(); Case();
}

void solve()
{
	
}

