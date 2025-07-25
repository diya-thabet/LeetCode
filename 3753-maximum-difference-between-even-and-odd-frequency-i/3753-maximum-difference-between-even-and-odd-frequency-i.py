class Solution:
    def maxDifference(self, s: str) -> int:
        d = Counter(s)
        return max((v for v in d.values() if v % 2 == 1)) - min((v for v in d.values() if v % 2 == 0))