class Solution:
    def isPalindrome(self, x: int) -> int:
        if x < 0:
            return False
        
        digits = []
        temp = x
        if temp == 0:
            digits = [0]
        while temp > 0:
            digits.append(temp % 10)
            temp //= 10
        
        left, right = 0, len(digits) - 1
        while left < right:
            if digits[left] != digits[right]:
                return False
            left += 1
            right -= 1
        
        return True