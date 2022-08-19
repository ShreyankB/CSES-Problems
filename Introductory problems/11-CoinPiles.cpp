#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for(ll i=0; i<n; i++)
#define foi(i, n) for(ll i=1; i<=n; i++)
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vs vector<string>
#define F first
#define S second

void solution() {
    ll a, b;    cin >> a >> b;
    ll x, y;
    bool ans = false;

    x = 2*b - a;
    y = 2*a - b;

    if(x >= 0 && y >= 0) {
        if(x % 3 == 0 && y % 3 == 0)
            ans = true;        
    }

    cout << (ans ? "YES" : "NO") << "\n";
}

int main() {

    int t;  cin >> t;
    
    while(t--)
        solution();
}