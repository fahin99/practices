#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    while(cin>>t && t--){
        int n;
        cin>>n;
        vector<int>a(2*n+1);
        int s=0;
        for(int i=1;i<=n;i++){
            for(int k=1;k<=n;k++){
                int j;
                cin>>j;
                if(a[i+k]==0){
                    a[i+k]=j;
                    s+=j;
                }
            }
        }
        a[1]=2*n*n+n-s;
        for(int i=1;i<=2*n;i++) cout<<a[i];
        cout<<endl;
    }

    return 0;
}
