#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000007
#define fo(i,x) for(int i=0;i<x;i++)
#define ll long long int
#define inp(n) vector<ll> a (n); fo(i,n) cin>>a[i];

void solve(ll n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll t;
    cin >> t;
	
    fo(i,t)
    {
	cout<<"Case #"<<i+1<<": ";
        ll n; cin >> n;
        solve(n);
    }
}

void solve(ll n)
{
	inp(n);
	fo(i,n)
	cout<<a[i]<<" ";
}
