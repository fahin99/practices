#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(s>a[n-1] || s<a[0]){
            cout<<max(s-a[0],a[n-1]-s)<<endl;
        }
        else{
            cout<<a[n-1]-a[0]+min(s-a[0],a[n-1]-s)<<endl;
        }
    }
}