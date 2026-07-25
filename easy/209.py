class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = 0
        sum_val = 0
        minLen = float('inf')
        for right in range(len(nums)):
            sum_val += nums[right]
            while sum_val >= target:
                minLen = min(minLen, right - left + 1)
                sum_val -= nums[left]
                left += 1
        return 0 if minLen == float('inf') else minLen
