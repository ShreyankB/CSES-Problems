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

ll cnt = 0;

bool canPutQueen(vector<vector<char>> &board, int r, int c) {
    fo(i, 8) 
        if(board[r][i] == 'q' || board[i][c] == 'q')    return false;
    
    int i=r, j=c;

    // upper right  i-1, j+1;
    while(i >= 0 && j < 8) {
        if(board[i][j] == 'q')  return false;
        i--;    j++;
    }

    // upper left i-1, j-1;
    i=r, j=c;
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 'q')  return false;
        i--;    j--;
    }

    // bottom right i+1, j+1
    i=r, j=c;
    while(i < 8 && j < 8) {
        if(board[i][j] == 'q')  return false;
        i++;    j++;
    }

    // bottom left  i+1, j-1
    i=r, j=c;
    while(i < 8 && j >= 0) {
        if(board[i][j] == 'q')  return false;
        i++;    j--;
    }

    return true;
}

bool isPossible(vector<int> &arr, vector<vector<char>> &board) {
    bool ans = true;
    
    fo(i, 8) {
        if(board[i][arr[i]] == '.') {
            if(canPutQueen(board, i, arr[i])) 
                board[i][arr[i]] = 'q';
            else {
                ans = false;
                break;
            }
        }
        else {
            ans = false;
            break;
        }
    }

    // if(ans) cnt++;

    fo(i, 8) {
        if(board[i][arr[i]] == 'q') 
            board[i][arr[i]] = '.';
    }

    return ans;
}

void permutations(int i, vector<int> &arr, vector<vector<char>> &board) {
    if(i == 8) {
        if(isPossible(arr, board)) 
            cnt++;
        return;
    }

    for(int it=i; it<8; it++) {
        swap(arr[it], arr[i]);
        permutations(i+1, arr, board);
        swap(arr[it], arr[i]);
    }
}

ll countWays(vector<vector<char>> &board) {
    vector<int> arr(8);
    fo(i, 8)    arr[i] = i;

    permutations(0, arr, board);
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 8;
    vector<vector<char>> board(n, vector<char>(n));
    fo(i, n)    fo(j, n)    cin >> board[i][j];

    cout << countWays(board);

    return 0;
}