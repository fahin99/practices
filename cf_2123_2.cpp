#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int aj = a[j-1];
        int count_greater = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > aj) {
                count_greater++;
            }
        }
        if (count_greater == 0) {
            cout << "YES\n";
        } else {
            if (k >= 2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}