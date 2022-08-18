#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i=0; i<n; i++)
#define foi(i, n) for(int i=1; i<=n; i++)
#define ll long long
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define F first
#define S second

int main() {
    // int n;  cin >> n;
    string s;   cin >> s;
    int n = s.size();
    
    int ans = 1, curr = 1;
    char prev = s[0];

    foi(i, n-1) {
        if(prev == s[i]) 
            curr++;
        else {
            ans = max(ans, curr);
            prev = s[i];
            curr = 1;
        }
    }

    ans = max(ans, curr);
    cout << ans << "\n";
}