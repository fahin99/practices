#include <bits/stdc++.h>
using namespace std;
int found(char c, string t){
    for(int i = 0; i < t.size(); i++){
        if(t[i] == c){
            return 1;
        }
    }
    return 0;
}
int main() {
    string s,t;
    cin >> s >> t;
    for(int i = 1; i < s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            if(!found(s[i-1], t)){
                cout << "No" << endl;
                return 0;
            }
        }
    }
 cout << "Yes" << endl;
    return 0;
}