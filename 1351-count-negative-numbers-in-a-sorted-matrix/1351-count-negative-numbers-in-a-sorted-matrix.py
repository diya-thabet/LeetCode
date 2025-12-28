class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        res= 0
        for i in grid:
            for j in i:
                res += max(0, int(j<0))
        return res
