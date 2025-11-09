class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        res = abs(num1 - num2)
        if num1 == 0 or num2 == 0: 
            return 0
        i = 0
        while res!=0:
            if num1 == 0 or num2 == 0: 
                break
            if num1 > num2 :
                num1 -= num2
            else :
                num2 -= num1
            i+=1
            res = abs(num1 - num2)
        return i+1

        