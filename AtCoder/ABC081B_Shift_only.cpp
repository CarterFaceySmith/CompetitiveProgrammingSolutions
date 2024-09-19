// Given n positive ints, if all ints are even, divide all by two, find the max num of times this divide operation can be done for the given input.
//
#include <bits/stdc++.h>

using namespace std;

int recursiveDivide(vector<int>& nums, int numOps) {
    // Check if all numbers are even
    for (int x : nums) {
        if (x % 2 != 0) {
            cout << numOps; // Print the number of operations and return
            return numOps; 
        }
    }

    // Divide all by 2
    for (int& x : nums) {
        x /= 2;
    }

    // Recur with incremented numOps
    return recursiveDivide(nums, numOps + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; 
    vector<int> nums(n); 

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    recursiveDivide(nums, 0);
    return 0;
}
