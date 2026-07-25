class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        answer = [0] * n
        # storing left side products
        answer[0] = 1
        for i in range(1, n):
            answer[i] = answer[i - 1] * nums[i - 1]
        # multiplying with right side products
        rightProduct = 1
        for i in range(n - 1, -1, -1):
            answer[i] = answer[i] * rightProduct
            rightProduct = rightProduct * nums[i]
        return answer
