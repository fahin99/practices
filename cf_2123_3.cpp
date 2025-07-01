#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string ans(n, '0');
        
        // Mark prefix-min positions
        int current_min = INT_MAX;
        for (int i = 0; i < n; ++i) {
            current_min = min(current_min, a[i]);
            if (a[i] == current_min) {
                ans[i] = '1';
            }
        }

        // Mark suffix-max positions
        int current_max = INT_MIN;
        for (int i = n - 1; i >= 0; --i) {
            current_max = max(current_max, a[i]);
            if (a[i] == current_max) {
                ans[i] = '1';
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
