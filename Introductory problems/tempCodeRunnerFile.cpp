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
    int n;  cin >> n;

    if(n == 2 || n == 3 || n == 4) {
        cout << "NO SOLUTION\n";
    }
    else {
        int num = 1;

        while(num <= n) {
            cout << num << " ";
            num += 2;
        }
        
        num = 2;

        while(num <= n) {
            cout << num << " ";
            num += 2;
        }

        cout << "\n";
    }
}