#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2!=0) cout<<x<<" "<<y<<endl;
        for(int i=1;i<k;i+=2){
            cout<<x+i<<" "<<y+i<<endl;
            cout<<x-i<<" "<<y-i<<endl;
        }
    }
    return 0;
}