#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i]>>b[i];
        if(a[i] >= b[i]) {
            c--;
        }
    }
    cout<<c<<endl;
    return 0;
}