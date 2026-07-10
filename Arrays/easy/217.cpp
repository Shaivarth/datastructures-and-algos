#include <iostream>
#include <vector>
#include <unordered_set> //im using hash set (no set can have duplicate elements)
using namespace std;

class Solution {
public:

    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main() {
    vector<int> nums = {3,1,1,0,2,0,0,4};
    Solution s;
    bool result = s.containsDuplicate(nums);
    cout << boolalpha << result;
    return 0;
}