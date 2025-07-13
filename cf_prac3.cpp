#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_a = 0, cnt_d=0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') {
            cnt_d++;
        }
        else if (s[i] == 'A') {
            cnt_a++;
        }
    }
    cout<< (cnt_a > cnt_d ? "Anton" : (cnt_d > cnt_a ? "Danik" : "Friendship")) << endl;
    return 0;
}