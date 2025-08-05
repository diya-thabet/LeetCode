class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        i, j =0, 0
        for ii in commands:
            if ii=="UP":
                i-=1
            if ii=="DOWN":
                i+=1
            if ii=="RIGHT":
                j+=1
            if ii=="LEFT":
                j-=1
        return i*n +j