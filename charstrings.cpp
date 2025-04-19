// question

#include <iostream>
#include <vector>
using namespace std;

int longestSubK(vector<int>& nums, int k) {
    int maxLength = 0;
    int n = nums.size();

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int sum = 0;
            for (int i = start; i <= end; i++) {
                sum = sum + nums[i];
            }

            if (sum == k) {
                maxLength = max(maxLength, end - start + 1);
            }
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {1, 2, 3, 1 };
    int k = 5;
    cout <<   longestSubK(arr, k) ;
    return 0;
}