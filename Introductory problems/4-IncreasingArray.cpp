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
    ll n;  cin >> n;
    vll arr(n);  fo(i, n)    cin >> arr[i];
    ll prev = arr[0];
    ll ans = 0;

    fo(i, n) {
        if(arr[i] < prev) {
            ans += (prev-arr[i]);
            arr[i] = prev;
        }
        prev = arr[i];
    }

    cout << ans << "\n";
}