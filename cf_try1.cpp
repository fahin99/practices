#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int c=0;
    if(s.length()>6){
        for(int i=0;i<=s.length()-7;i++){
        c=0;
            for(int j=i;j<i+6;j++){
                if(s[j]==s[j+1]) c++;
                else break;
                if(c==6){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
    }
            cout<<"NO"<<endl;
}
    else cout<<"NO"<<endl;
    return 0;
}