#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i=0; i<n; i++)
#define foi(i, n) for(int i=1; i<=n; i++)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vs vector<string>
#define F first
#define S second

int main() {
    ll n;   cin >> n;
    vll arr(n); fo(i, n-1)    cin >> arr[i];
    ll ans = 0;

    fo(i, n-1)    ans ^= arr[i];
    foi(i, n)   ans ^= i;

    cout << ans << "\n";
}