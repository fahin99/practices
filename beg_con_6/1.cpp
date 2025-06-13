#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        
        long long max_n_coins = min(a, s / n);
        long long remaining = s - max_n_coins * n;
        
        if (b >= remaining) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
