def dodo(n):
    return len(str(n))%2 == 0

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        res=0
        for i in nums:
            if dodo(i):
                res+=1
        return res
