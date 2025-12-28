class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        count = 0
        for item in grid:
            reverse = item[::-1]
            pos = bisect_left(reverse,0)
            count = count + pos
        return count
                        