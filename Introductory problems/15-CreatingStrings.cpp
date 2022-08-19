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

void generate_strings(string s, int i, set<string> &ans) {
    if(i == s.size())  {
        ans.insert(s);
        return;
    }

    for(int it=i; it<s.size(); it++) {
        swap(s[it], s[i]);
        generate_strings(s, i+1, ans);
        swap(s[it], s[i]);
    }
}

int main() {
    string s;   cin >> s;

    set<string> ans;
    generate_strings(s, 0, ans);

    cout << ans.size() << "\n";

    for(auto it: ans) {
        cout << it << "\n";
    }
}