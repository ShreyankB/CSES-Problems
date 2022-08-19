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
#define mod (ll)1e9+7

int main() {
    ll n;   cin >> n;
    ll ans = 1;

    for(int i=1; i<=n; i++) {
        ans = (ans * 2) % 1000000007;
    }
    
    cout << ans;
}