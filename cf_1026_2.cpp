#include <iostream>
#include <stack>
using namespace std;


/*the ans is totally wrong*/



int main(){
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        stack<char> st;
        bool canBreak = false;

        for (char c : s) {
            if (c == '('){
                st.push(c);
            } 
            else{ 
                if (st.empty()){
                    canBreak = true;
                    break;
                } 
                else{
                    st.pop();
                }
            }
        }

        if (canBreak || s.find(")(") != string::npos){
            cout << "YES\n";
        } 
        else{
            cout << "NO\n";
        }
    }
}
