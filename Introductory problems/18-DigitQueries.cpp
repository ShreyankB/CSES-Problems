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

int findDigit(int d, vll &arr) {
    int digits = 1;

    fo(i, 17) {
        if(arr[i] >= d) {
            digits = i+1;
            break;
        }
    }

    if(digits > 1)
        d -= arr[digits-2];

    ll skip;

    if(d % digits)
        skip = d / digits;
    else 
        skip = d / digits - 1;

    ll start = pow(10, digits-1);
    start += skip;

    d -= skip * digits;

    vector<int> vals;

    while(start != 0) {
        int p = start % 10;
        start /= 10;

        vals.push_back(p);
    }

    reverse(vals.begin(), vals.end());
    
    return vals[d-1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;  cin >> q;

    vll arr(17, 0);
    arr[0] = 9;

    ll mult = 10;
    ll digs = 2;


    foi(i, 16) {
        arr[i] = mult*digs*9l;
        arr[i] += arr[i-1];
        mult *= 10;
        digs++;
    }

    while(q--) {
        int d;  cin >> d;
        cout << findDigit(d, arr) << "\n";
    }

    return 0;
}