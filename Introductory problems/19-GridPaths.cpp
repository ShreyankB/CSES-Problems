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

ll dp[7][7];

ll f(int r, int c, string path, string curr, vector<vector<bool>> &vis) {
    // if(curr.size() > 48)    return;
    if(r < 0 || c < 0 || r >= 7 || c >= 7 || vis[r][c])    return 0;
    
    if(dp[r][c] != -1)  return dp[r][c];

    if(r == 6 && c == 6) {
        cout << curr << "\n";
        if(path.size() == curr.size())  {
            fo(i, path.size()) {
                if(!((path[i] == '?') || (path[i] == curr[i])))
                    return 0;
            }
            return 1;
        }
        return 0;
    }
    
    vis[r][c] = true;
    ll ans = 0;

    ans += f(r+1, c, path, curr+"D", vis);
    ans += f(r-1, c, path, curr+"U", vis);
    ans += f(r, c+1, path, curr+"R", vis);
    ans += f(r, c-1, path, curr+"L", vis); 
    
    vis[r][c] = false;
    return dp[r][c] = ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string path; cin >> path;
    vector<vector<bool>> vis(7, vector<bool>(7, false));
    memset(dp, -1, sizeof(ll)*49);
    string curr = "";
    cout << f(0, 0, path, curr, vis);

    return 0;
}