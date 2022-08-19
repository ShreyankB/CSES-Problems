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
    string s;   cin >> s;
    int n = s.size();
    vi cnt(26, 0);

    fo(i, n)
        cnt[s[i]-'A']++;

    int odd = 0;

    fo(i, 26) {
        if(cnt[i] % 2 == 1)
            odd++;
    }

    if((n % 2 && odd > 1) || (n%2 == 0 && odd > 0)) {
        cout << "NO SOLUTION";  
        return 0;
    }

    int st=0, en=n-1;
    int mid = n >> 1;

    fo(i, 26) {
        while(cnt[i] > 0) {
            if(cnt[i] > 1) {
                s[st] = s[en] = 'A' + i;
                st++;
                en--;
                cnt[i] -= 2;
            }
            else if(cnt[i] == 1) {
                s[mid] = 'A'+i;
                cnt[i] = 0;
            }
        }
    }

    cout << s;
}