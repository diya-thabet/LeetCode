class Solution:
    def arrangeCoins(self, n: int) -> int:
        i = 1
        res= 0 
        while n>0:
            res+=1
            i+=1
            n-=i
        return res