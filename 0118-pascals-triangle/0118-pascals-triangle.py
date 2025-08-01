class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res=[]
        for i in range( numRows):
            l = []
            for j in range(i+1):
                l.append(math.comb(i, j))
            res.append(l)
        return res