class Solution:
    def arrangeCoins(self, n: int) -> int:
        i = 1
       
        while n>0:
            i+=1
            n-=i
        return i-1