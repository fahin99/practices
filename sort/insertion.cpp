#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& a){
    int n=a.size();
    for(int i=0; i<n; ++i){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j], a[j-1]);
            --j;
        }
    }
}

int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Before: ";
    for(int x : arr) cout<<x<<' ';
    cout<<endl;
    insertionSort(arr);
    cout << "After: ";
    for(int x : arr) cout<<x<<' ';
    cout<<endl;
    return 0;
}