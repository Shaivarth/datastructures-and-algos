class Solution:

    def threeSum(self, nums):
        nums.sort()
        res = []
        n = len(nums)

        for i in range(n - 2):
            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            left, right = i + 1, n - 1

            while left < right:
                s = nums[i] + nums[left] + nums[right]
                if s < 0:
                    left += 1
                elif s > 0:
                    right -= 1
                else:
                    res.append([nums[i], nums[left], nums[right]])
                    left += 1
                    right -= 1

                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1

        return res
    
nums = [-1, 0, 1, 2, -1, -4]
numss = [-2, 0, 1, 1, 2]
numsss = [1, 2, 3, 4]
numssss = [0, 0, 0, 0]
nums = [-1, 0, 1, 2, -1, -4]

sol = Solution()
print(sol.threeSum(nums))
print(sol.threeSum(numss))
print(sol.threeSum(numsss))
print(sol.threeSum(numssss))

