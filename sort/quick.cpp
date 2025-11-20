#include<bits/stdc++.h>
using namespace std;

int partIdx(vector<int>arr, int low, int high){
    int pivot=arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=arr[pivot] and i<=high) i++;
        while(arr[j]>arr[pivot] and )
    }
}