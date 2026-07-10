#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0,8,0,8,2,0,0,3};
    Solution s;
    s.moveZeroes(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}