#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    fastio;
    int n;
    cin>>n;
    string t;
    cin >> t;
    if(n<26){
        cout << "NO" << endl;
        return 0;
    }
    int a[26] = {0};
    for (char c : t) {
        if(isalpha(c)) {
            a[tolower(c) - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}