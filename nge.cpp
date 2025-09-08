#include<bits/stdc++.h>
using namespace std;

vector<int>nge(vector<int> &v){
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && v[st.top()]<v[i]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()]=-1;
        st.pop();
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int>ans=nge(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        if(ans[i]==-1) cout<<"-1"<<endl;
        else cout<<v[ans[i]]<<endl;
    }
    return 0;
}