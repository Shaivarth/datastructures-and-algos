class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        def backtrack(target, curr, index):
            if target == 0:
                ans.append(list(curr))
                return
            if target < 0:
                return
            for i in range(index, len(candidates)):
                curr.append(candidates[i])
                backtrack(target - candidates[i], curr, i)
                curr.pop()
                
        backtrack(target, [], 0)
        return ans
