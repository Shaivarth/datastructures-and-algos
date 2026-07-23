# LOGIC:
# using modified version of kadanes algo,
# we are using currMin because in future it can
# become currMax if multiplied by negative number,
# we are swapping on negative number,
# because a -ve num can make currMin a currMax and vice versa.
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        currMax = nums[0]
        currMin = nums[0]
        ans = nums[0]

        for i in range(1, len(nums)):
            if nums[i] < 0:
                currMax, currMin = currMin, currMax
            currMax = max(nums[i], currMax * nums[i])
            currMin = min(nums[i], currMin * nums[i])
            ans = max(ans, currMax)
        return ans
