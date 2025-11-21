#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,cnt=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b-a>=2){
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}