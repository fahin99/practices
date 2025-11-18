#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a){
    int n =a.size();
    for(int i =0; i<n-1; ++i){
        for(int j =0; j<n-i-1; ++j){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main() {
    vector<int>arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Before: ";
    for(int x : arr) cout<<x<<' ';
    cout<< endl;
    bubbleSort(arr);
    cout<<"After:  ";
    for(int x : arr) cout<<x<<' ';
    cout<<endl;

    return 0;
}