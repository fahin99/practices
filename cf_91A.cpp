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
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(islucky(i) and n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}