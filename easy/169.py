from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # using the Boyer Moore Voting Algorithm.
        count = 0
        candidate = None
        for num in nums:
            if count == 0:
                candidate = num
            if num == candidate:
                count += 1
            else:
                count -= 1
                
        return candidate 