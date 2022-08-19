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

ll ans = INT_MAX;
ll sum = 0;

void f(ll i, ll curr_sum, vll &arr) {
    if(i == arr.size()) {
        // cout << ans << " " << curr_sum << " " << abs(sum-curr_sum) << "\n";
        ans = min(ans, abs(curr_sum - (sum-curr_sum)));
        return;
    }

    f(i+1, curr_sum+arr[i], arr);
    f(i+1, curr_sum, arr);
}

int main() {
    ll n;  cin >> n;
    ll bits = n;
    vll arr(n);  fo(i, n)   { cin >> arr[i];     sum += arr[i]; }
    // f(0, 0, arr);
    // cout << ans << "\n";

    fo(i, (1 << n)) {
        bits = n;
        ll num = i;
        ll s1=0, s2=0;
        ll j=0;

        while(bits--) {
            if(num % 2) 
                s1 += arr[j];
            num = num >> 1;
            j++;            
        }

        s2 = sum-s1;
        // cout << s1 << " " << s2 << "\n";
        ans = min(ans, abs(s1-s2));
    }

    cout << ans;
}