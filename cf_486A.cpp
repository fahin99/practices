#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n&1){
        cout<<(n/2)-n<<endl;
    }
    else{
        cout<<n/2<<endl;
    }
}