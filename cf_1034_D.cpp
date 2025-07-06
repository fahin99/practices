#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define test int t; cin >> t; while (t--)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    fastio;
    test{
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
        }
        if(cnt1<=k or n<2*k){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}