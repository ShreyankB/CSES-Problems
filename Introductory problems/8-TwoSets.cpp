#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for(ll i=0; i<n; i++)
#define fr(i, n) for(ll i=n; i>=0; i--)
#define foi(i, n) for(ll i=1; i<=n; i++)
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vs vector<string>
#define F first
#define S second

int main() {    
    ll n;   cin >> n;
    ll sum = ((n * (n+1)) >> 1);
    // cout << sum << "\n";

    if(sum % 2)
        cout << "NO\n";
    else {
        cout << "YES\n";
        sum = sum >> 1;
        vi arr(n+1, 0);
        int cnt = 0;

        for(int i=n; i>=1; i--) {
            if(sum <= i) {
                arr[sum] = 1;
                sum = 0;
            }
            else {
                sum -= i;
                arr[i] = 1;
            }

            cnt++;
            if(sum == 0)
                break;
        }

        cout << cnt << "\n";

        for(int i=1; i<=n; i++) {
            if(arr[i] == 1)
                cout << i << " ";
        }

        cout << "\n" << n-cnt << "\n";

        for(int i=1; i<=n; i++)
            if(arr[i] == 0)
                cout << i << " ";
        
        cout << "\n";
    }
}