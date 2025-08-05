def isK(n ,k):
    res=0
    l = str(n)
    for i in range(33):
        if n&1:
            res+=1
        n= n>>1
        
    return res==k


class Solution:
    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        print(isK(15, k))
        res=0
        for i in range(len(nums)):
            if(isK(i, k)):
                res+=nums[i]
        return res