class Solution:
    def countOperations(self, n1: int, n2: int) -> int:
        n=0
        while n1!=0 and n2!=0:
            if n1>=n2:
                n1= n1-n2
            else:
                n2= n2 - n1
            n+=1
        return n
        