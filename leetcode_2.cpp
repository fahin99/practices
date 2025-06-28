#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
}
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
}