/*
[Using Sliding Window Technique]
Given an array of positive integers nums and a positive integer target, 
return the minimal length of a subarray whose sum is greater than or equal to target.
If there is no such subarray, return 0 instead.
Example 1:
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            // Shrink window while condition is satisfied
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        } 
        // here complexity is O(2n)=O(n), because Both loops only move forward.
        // in other inner loop programs, Inner loop restarts fully every time.
        // here 'while loop' does NOT restart from beginning. 
        // 'left' continues from where it already was.
        return (minLen == INT_MAX) ? 0 : minLen;
        //Ternary operator: (condition) ? value_if_true : value_if_false;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << obj.minSubArrayLen(target, nums);
    return 0;
}
