#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();){
        if(s[i]=='W'){
            if(i+1<s.size() && s[i+1]=='U' && i+2<s.size() && s[i+2]=='B'){
                i+=3;
                if(c > 0){
                    cout<<" ";
                    c = 0;
                }
            } 
            else{
                cout<<s[i];
                i++;
                c++;
            }
        } 
        else{
            cout<<s[i];
            i++;
            c++;
        }
    }
    return 0;
}