/*
LOGIC:
using modified verssion of kadanes algo,
we are using currMin because in future it can,
become currMax if multiplied by negative number,
we are swapping on negative number,
because a -ve num can make currMin a currMax and vice versa.
eg: 
currMax = 10
currMin = -20
nums[i] = -2
10 × -2 = -20
-20 × -2 = 40
The roles reverse.
Maximum becomes minimum.
Minimum becomes maximum.
So before multiplication
swap(currMax, currMin)
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0)
                swap(currMax, currMin);
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);
            ans = max(ans, currMax);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2, -3, -2, 4};
    Solution obj;
    cout << obj.maxProduct(nums);
    return 0;
}