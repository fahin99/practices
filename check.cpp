#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    int mx=max({a,b,c});
    int mn=min({a,b,c});
    int md=(a^b^c)^(mx^mn);
    cout<<md<<endl;
    return 0;
}