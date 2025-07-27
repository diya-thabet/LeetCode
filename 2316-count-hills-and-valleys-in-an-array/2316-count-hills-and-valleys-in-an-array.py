class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        
        i, j = 0, 0
        res= 0
        for k in range(1, len(nums)-1):
            if nums[k]==nums[k+1]:
                continue
            i, j = k-1, k+1
            while(nums[i]==nums[k]):
                i-=1
            while(nums[j]==nums[k]):
                j+=1
            if(i<0 or j>len(nums)-1):
                continue
            if(nums[i]>nums[k] and nums[j] > nums[k]):
                print(nums[k])
                res+=1
            if(nums[i]<nums[k] and nums[j] < nums[k]):
                print(nums[k])
                res+=1
        return res