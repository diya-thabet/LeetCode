def squareIsWhite(coordinates):
        c = ord(coordinates[0]) - ord('a')
        n = int(coordinates[1])
        return (c+n)%2

class Solution:
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        return squareIsWhite(coordinate1) == squareIsWhite(coordinate2)