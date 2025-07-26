class Solution:
    def isThree(self, n: int) -> bool:
        c = 2
        for i in range(2,(n//2)+1):
            if(n%i==0):
                c+=1
            
        return c==3