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
    ll n;  cin >> n;
    
    foi(i, n) {
        ll total = (i*i)*(i*i-1)/2;
        ll attackRegions = 4*(i-1)*(i-2);
        cout << (total - attackRegions) << "\n";
    }
}