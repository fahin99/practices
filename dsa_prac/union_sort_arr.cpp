#include <bits/stdc++.h>
using namespace std;

vector<int> union_sorted_arrays(vector<int>& arr1, vector<int>& arr2){
    vector<int> result;
    int i=0, j=0, n1=arr1.size(), n2=arr2.size();
    while(i<n1 and j<n2){
        if(arr1[i]<=arr2[j]){
            if(result.empty() or result.back()!=arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(result.empty() or result.back()!=arr2[j]){
                result.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(result.empty() or result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> arr1={1,2,2,3,4,5};
    vector<int> arr2={2,3,5,6,7};
    vector<int> result=union_sorted_arrays(arr1, arr2);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}