#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    fastio;
    // your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        int zer=0, one=0, two=0, three=0, five=0, note=0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 0) zer++;
            else if(a[i] == 1) one++;
            else if(a[i] == 2) two++;
            else if(a[i] == 3) three++;
            else if(a[i] == 5) five++;
            if(zer>2 && one>0 && two>1 && three>0 && five>0){
                note=i+1;
                zer=0; one=0; two=0; three=0; five=0;
            }
        }
        if(n<8) {
            cout << "0" << endl;
            continue;
        }
        else  cout<<note << endl;
    }
    return 0;
}