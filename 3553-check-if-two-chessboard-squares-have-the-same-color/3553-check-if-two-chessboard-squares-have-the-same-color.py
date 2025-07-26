class Solution:
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        return abs(ord(coordinate1[0])+int(coordinate1[1])-ord(coordinate2[0])-int(coordinate2[1])) & 1 == 0