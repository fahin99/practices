#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int idx = 0;

    for (char c : s) {
        if (c == target[idx]) {
            idx++;
            if (idx == 5) break;
        }
    }

    if (idx == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
