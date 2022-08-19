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

int main() {
    ll n;   cin >> n;
    ll cnt = 0;
    ll div = 5;

    while(div <= n) {
        cnt += (n/div);
        div *= 5;
    }

    cout << cnt;

}