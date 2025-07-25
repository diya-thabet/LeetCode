class Solution:
    def maxDifference(self, s: str) -> int:
        odd = 0
        even = 10**1000
        d= Counter(s)
        for i, v in d.items():
            if v>odd and v%2==1:
                odd = v
            elif v<even and v%2==0:
                even = v

        return odd - even