#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int got=0;
        for(int i=0; i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                got=1;
                break;
            }
        }
        if(got) cout<<1<<endl;
        else cout<<s.size()<<endl;
    }
    return 0;
}