class Solution:
    def sumZero(self, n: int) -> List[int]:
        res= []
        if n%2==1:
            n=n-1
            res=[0]
        for i in range(1, (n//2) +1):
            res.extend([-i, i])
        return res