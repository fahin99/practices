#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int>brackets={
    {'(', 1},
    {')', -1},
    {'{', 2},
    {'}', -2},
    {'[', 3},
    {']', -3}
};
bool isBalanced(string s){
    stack<char>st;
    for(char c:s){
        if(brackets[c]>0) st.push(c);
        else{
            if(st.empty()) return false;
            char top=st.top();
            st.pop();
            if(brackets[top]+brackets[c]!=0) return false;
        }
    }
    return st.empty();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(isBalanced(s)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}