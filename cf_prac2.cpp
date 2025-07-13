#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define test int t; cin >> t; while(t--)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int islucky(int n){
    while(n){
        int r=n%10;
        if(r!=4 and r!=7) return 0;
        n/=10;
    }
    return 1;
}
int main() {
    fastio;
    string s;
    cin >> s;
    int c=0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            c++;
        }
    }
    if(islucky(c) && c > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}