#include <iostream>
#include <vector>
#include <algorithm> //for reverse function
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());//nums.end() one position after last element, not last element itself.
        reverse(nums.begin(), nums.begin() + k); //upto position nums.begin() + k, but not including it.()
        reverse(nums.begin() + k, nums.end()); //index 0+k to end of array.
    }
};
int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    Solution s;
    s.rotate(nums, k);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
// IMPORTANT NOTE:
// STL ranges follow [start, end)
// start iterator is INCLUDED
// end iterator is EXCLUDED

// Example:
// reverse(nums.begin(), nums.begin() + 3);

// begin() points to index 0
// begin()+3 points to index 3 (excluded)

// So reversed indexes are:
// [0,3) => 0,1,2
