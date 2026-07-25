class Solution:
    def generate(self, numRows):
        result=[]
        for i in range(numRows):
            if i == 0:
                row = [1]
                result.append(row)
                continue
            prev = result[i - 1]
            row = [1]
            for j in range(len(prev) - 1):
                row.append(prev[j]+prev[j+1])
            row.append(1)
            result.append(row)
        return result
