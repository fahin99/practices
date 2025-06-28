#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> s(n);
        for (int i = 0; i < n; ++i) cin >> s[i];
        
        ll start = s[0], end = s[n - 1];
        vector<ll> mid;

        for (int i = 1; i < n - 1; ++i) {
            mid.push_back(s[i]);
        }

        sort(mid.begin(), mid.end());

        ll curr = start;
        int cnt = 2; // start and end
        bool possible = false;

        for (int i = 0; i <= mid.size(); ++i) {
            if (end <= 2 * curr) {
                possible = true;
                break;
            }
            if (i == mid.size()) break;
            if (mid[i] <= 2 * curr) {
                curr = mid[i];
                cnt++;
            }
        }

        if (end <= 2 * curr) {
            cout << cnt << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}
