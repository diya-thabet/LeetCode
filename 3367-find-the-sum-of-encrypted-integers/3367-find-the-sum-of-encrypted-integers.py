def enc(n):
    s =str(n)
    maxi="0"
    for i in s:
        maxi= max(maxi, i)
    return int(maxi*len(s)) 

class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        res= 0
        for i in nums:
            res+= enc(i)
        return res
        