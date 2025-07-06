#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define all(x) (x).begin(), (x).end()
typedef long long ll;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> mat[i][j];
    int maxn=*max_element(all(mat[0]));
    for(int i = 1; i < n; ++i) {
        int cur_max = *max_element(all(mat[i]));
        if(cur_max > maxn) {
            maxn = cur_max;
        }
    }
    int cnt=0, times=0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(mat[i][j] == maxn) {
                times++;
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(mat[i][j] == maxn) {
                cnt++;
            }
        }
        for(int j=0;j<m;j++){
        for(int k=i+1;k<n;k++) {
            if(mat[k][j] == maxn) {
                cnt++;
            }
        }
        if(cnt == times) {
            cout<<maxn-1<<endl;
            return;
        }
        cnt=0;
    }
}
    cout<<maxn<<endl;
    return;
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