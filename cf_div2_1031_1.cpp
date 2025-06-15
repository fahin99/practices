#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;

        long long cnt1=0, cnt2=0;
        if(k>=a || k>=b){
            if(x<=y){
                if (k>=a){
                    cnt1=(k-a)/x +1;
                    k-=cnt1*x;
                }
                if (k>=b){
                    cnt2=(k-b)/y +1;
                }
            } 
            else{
                if(k>=b){
                    cnt2=(k-b)/y +1;
                    k-=cnt2*y;
                }
                if(k>=a){
                    cnt1=(k-a)/x +1;
                }
            }
        }

        cout<<cnt1+cnt2<<endl;
    }
    return 0;
}
