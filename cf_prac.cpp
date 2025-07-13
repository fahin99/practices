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
    int n,k;
    cin >> n>>k;
    for(int i=1;i<=k;i++){
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n<<'\n';
    return 0;
}