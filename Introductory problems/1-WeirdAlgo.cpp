#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i=0; i<n; i++)
#define ll long long
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define F first
#define S second

int main() {
    ll n;   cin >> n;

    cout << n << " ";
    
    while(n != 1) {        
        if(n % 2) {
            n *= 3;
            n += 1;
        }
        else {
            n /= 2;
        }

        cout << n << " ";
    }


}