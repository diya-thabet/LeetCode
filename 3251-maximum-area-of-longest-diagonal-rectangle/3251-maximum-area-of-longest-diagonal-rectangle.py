class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        res= 0
        area= 0
        for i in dimensions:
            if ((i[0]**2 + i[1]**2) > res ) or ( (i[0]**2 + i[1]**2) == res and area< (i[0]*i[1])) :
                res= max((i[0]**2 + i[1]**2) , res)
                area= i[0]*i[1]
        return area
        