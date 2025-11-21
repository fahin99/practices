#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    if(n&1){
        cout<<(n>>1)-n<<endl;
    }
    else{
        cout<<(n>>1)<<endl;
    }
}