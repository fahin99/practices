#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt=1;
    cin >> n;
    vector<string> a;
    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        a.push_back(x);
        if(i>0 and a[i]!=a[i-1]) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}