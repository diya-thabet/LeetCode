class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        c = ord(coordinates[0]) - ord('a')
        n = int(coordinates[1])
        return (c+n)%2==0