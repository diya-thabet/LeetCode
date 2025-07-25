class Solution:
    def maxSum(self, nums: List[int]) -> int:
        res = set()
        for i in nums:
            
            res.add(i)
        sum = 0

        res = list(res)

        for i in res:
            if i>=0 :
                sum+=i
        if sum == 0 :
            sum = res[0]
            for i in res:
                if i>sum:
                    sum  = i

        return sum