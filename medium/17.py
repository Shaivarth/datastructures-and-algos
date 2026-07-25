class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        m = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }
        ans = []
        path = []
        def dfs(i):
            if i == len(digits):
                ans.append("".join(path))
                return
            for ch in m[digits[i]]:
                path.append(ch)
                dfs(i + 1)
                path.pop()
        dfs(0)
        return ans
