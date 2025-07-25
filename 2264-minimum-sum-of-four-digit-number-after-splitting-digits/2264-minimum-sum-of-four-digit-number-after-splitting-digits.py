class Solution:
    def minimumSum(self, num: int) -> int:
        num = sorted(str(num))
        num1, num2= "", ""
        num1 = [num1+num[k] for k in range(0, len(num), 2)]
        num2 = [num2+num[k] for k in range(1, len(num), 2)]
        num1 = "".join(num1)
        num2 = "".join(num2)
        return int(num1) + int(num2)
