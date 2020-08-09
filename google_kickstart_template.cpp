#include <bits/stdc++.h>
#include <iostream>
#include <bitset>
#include <limits>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

#define MAX 1000000007
#define fo(i,x) for(int i=0;i<x;i++)

void solve(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int q;
    cin >> q;
	
    fo(i,q)
    {
		cout<<"Case #"<<i+1<<": ";
        int n; cin >> n
        solve(n);
    }
}

void solve(int n)
{
	
}
