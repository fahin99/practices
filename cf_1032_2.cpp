#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n-2;j++){
            for(int i=j+1;i<n-1;i++){
                if(s[j]==s[i]){
                    cout<<"Yes"<<endl;
                    f++;
                    break;
                }
            }
            if(f) break;
        }
        if(!f){
            char c1=s[n-1];
            for(int i=n-2;i>0;i--){
                if(c1==s[i]){
                    cout<<"Yes"<<endl;
                    f++;
                    break;
                }
            }
        }
        if(!f) cout<<"No"<<endl;
    }
}