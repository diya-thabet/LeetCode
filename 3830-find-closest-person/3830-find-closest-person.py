class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        x-=z
        y-=z
        if abs(x) > abs(y):
            return 2
        elif abs(x) == abs(y):
            return 0
        return 1
        