class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1

        if n < 0:
            x = 1.0 / x
            n *= -1

        res = 1

        while n >= 1:
            if n % 2 == 1:
                res *= x
                n -= 1

            x *= x
            n //= 2

        return res