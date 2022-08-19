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

vector<pair<char, char>> moves;

ll countMoves(char A, char B, char C, ll n) {
    if(n == 0)  return 0;

    ll ans = 0;
    ans += countMoves(A, C, B, n-1);
    moves.push_back({A, B});
    ans += 1;
    ans += countMoves(C, B, A, n-1);

    return ans;
}

int main() {
    ll n;   cin >> n;
    cout << countMoves('1', '3', '2', n) << "\n";

    fo(i, moves.size()) {
        cout << moves[i].F << " " << moves[i].S << "\n";
    }
}