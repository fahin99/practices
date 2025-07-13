#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    int maxn = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j) {
            cin >> mat[i][j];
            maxn = max(maxn, mat[i][j]);
        }

    int times = 0; 
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(mat[i][j] == maxn)
                times++;

    // Now try each row i and column j
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            int count = 0;
            for(int k = 0; k < m; ++k)
                if(mat[i][k] == maxn)
                    count++;
            for(int k = 0; k < n; ++k)
                if(k != i && mat[k][j] == maxn)
                    count++;

            if(count == times) {
                cout << maxn - 1 << '\n';
                return;
            }
        }
    }

    cout << maxn << '\n';
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
