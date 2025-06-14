#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= k) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}