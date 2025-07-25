class Solution:
    def trailingZeroes(self, n: int) -> int:
        return n//3125+n//625+n//125+n//25+n//5