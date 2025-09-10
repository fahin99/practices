#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        queue<int> q;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            q.push(x);
        }
        for(int i=0;i<k;i++){
            int top=q.front();
            q.pop();
            q.push(top);
        }
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }
}
