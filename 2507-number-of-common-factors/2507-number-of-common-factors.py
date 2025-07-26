class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        res = 0
        for i in range(1, min(a, b)+1):
            if(a%i == b%i == 0):
                res+=1
        return res