class Solution:
    def maxDifference(self, s: str) -> int:
        odd = 0
        even = 10**1000
        d= {k: 0 for k in s}
        for i in s:
            d[i]+=1
        for i in s:
            if d[i]>odd and d[i]%2==1:
                odd = d[i]
            if d[i]<even and d[i]%2==0:
                even = d[i]

        return odd - even