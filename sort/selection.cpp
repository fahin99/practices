#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a){
    int n=a.size();
    for(int i=0; i<n-1; ++i){
        int minIdx=i;
        for(int j=i+1; j<n; ++j){
            if(a[j]<a[minIdx]) minIdx=j;
        }
        if(minIdx!=i) swap(a[i], a[minIdx]);
    }
}

int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Before: ";
    for(int x : arr) cout<<x<<' ';
    cout<<endl;
    selectionSort(arr);
    cout<<"After: ";
    for(int x : arr) cout<<x<<' ';
    cout<<endl;
    return 0;
}