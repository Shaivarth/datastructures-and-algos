#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2;
        int arraySum = 0;
        for (int i = 0; i < n; i++) {
            arraySum += nums[i];
        }
        return totalSum - arraySum;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};
    Solution s;
    int result = s.missingNumber(nums);
    cout << "Missing Number = " << result << endl;
    return 0;
}
