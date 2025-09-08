#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=3, series_count=0, learn_count=0;
    while(t--){
        srand(time(0));
        int result=rand()%2;
        if(result==0) {
            cout<<"Heads"<<endl;
            series_count++;
        } 
        else {
            cout<<"Tails"<<endl;
            learn_count++;
        }
        if(series_count>=2 || learn_count>=2) {
            break;
        }
    }
    cout<< (series_count > learn_count ? "Series" : "Learning") << endl;
}