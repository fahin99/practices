#include <iostream>
using namespace std;

int main() {
    // Your code here
    int t;
    cin >> t;   
    while(t--){
        int n, ins_pos=0;
        cin>>n;
        long long k;
        cin>>k;
        string s;
        cin>>s;
        string ans = s;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                long long found= min(k, (long long)i - ins_pos);
                k -= found;
                ans[i] = '1';
                ans[i-found] = '0';
                ins_pos++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
