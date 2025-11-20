#include<bits/stdc++.h>
using namespace std;

int partIdx(vector<int>& arr, int low, int high){
    int pivot=arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot and i<=high) i++;
        while(arr[j]>pivot and j>=low) j--;
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qSort(vector<int>& arr, int low, int high){
    if(low<high){
        int part_idx=partIdx(arr, low, high);
        qSort(arr, low, part_idx-1);
        qSort(arr, part_idx+1, high);
    }
}
int main(){
    vector<int> arr={2,1,3};
    int n=arr.size();
    qSort(arr, 0, n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}