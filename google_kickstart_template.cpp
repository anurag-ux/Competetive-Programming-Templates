#include <bits/stdc++.h>

using namespace std;

#define MAX 1000005
#define fo(i,x) for(int i=0;i<x;i++)
#define ll long long int
#define inp(n) vector<ll> a (n); fo(i,n) cin>>a[i];
#define out(a,n) fo(i,n) cout<<a[i]<<" ";
#define Graph(n) vector<int> graph[n+1];
#define addEdgeDirect(adj,u,v){adj[u].push_back(v);}
#define addEdgeUnDirect(adj,u,v){adj[u].push_back(v); adj[v].push_back(u);}
#define Prime(n){vector<int> primes; SieveOfEratosthenes(primes); return primes[n];}
#define Case() ll t; cin >> t; fo(i,t){ cout<<"Case #"<<i+1<<": ";ll n; cin >> n;solve(n);}
#define io() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve(ll n);
void SieveOfEratosthenes(vector<int> &primes);

int main()
{
	io(); Case();
}

void solve(ll n)
{
	
}

void SieveOfEratosthenes(vector<int> &primes)  
{
    bool IsPrime[MAX];  
    memset(IsPrime, true, sizeof(IsPrime));  
    
    for (int p = 2; p * p < MAX; p++)  
    { 
        if (IsPrime[p] == true){
            for (int i = p * p; i <  MAX; i += p)  
                IsPrime[i] = false;  
        }  
    }
    for (int p = 2; p < MAX; p++)  
       if (IsPrime[p])  
            primes.push_back(p);             
}


