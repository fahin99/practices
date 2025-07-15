#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    fastio;
    int n,h,cnt=0;
    cin >> n>>h;
   int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > h) {
            cnt+=2;
        }
        else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}