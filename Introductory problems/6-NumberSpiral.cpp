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
    int t;  cin >> t;

    while(t--) {
        ll r, c;   cin >> r >> c;
        ll num;

        if(r > c) {
            num = (r-1) * (r-1);

            if(r % 2 == 0) {
                num += r;
                num += (r-c);
            }
            else {
                num += c;
            }
        }
        else {
            num = (c-1) * (c-1);

            if(c % 2) {
                num += c;
                num += (c-r);
            }
            else {
                num += r;
            }
        }

        cout << num << "\n";
    }

}