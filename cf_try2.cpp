#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        ll s;
        cin>>s;
        for(int i=0;i<n;i++){
            int d1, d2, x, y;
            cin>>d1>>d2>>x>>y;
            if(d1==d2){
                if((abs((s-y)*1.0/(s-x))==1) || (abs((0-y)*1.0/(0-x))==1)) c++;
            }
            else{
                if((abs((0-y)*1.0/(s-x))==1) || (abs((s-y)*1.0/(0-x))==1)) c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}