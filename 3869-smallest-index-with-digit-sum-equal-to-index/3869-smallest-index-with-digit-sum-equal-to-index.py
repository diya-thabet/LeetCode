def fofo(n):
    p=0
    while(n>0):
        p+= n%10
        n//=10
    return p

class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            if i == fofo(nums[i]):
                return i
        return -1