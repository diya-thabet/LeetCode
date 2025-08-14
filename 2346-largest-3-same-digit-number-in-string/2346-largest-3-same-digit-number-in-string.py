class Solution:
    def largestGoodInteger(self, num: str) -> str:
        maxi=""
        for i in range(len(num)-2):
            if num[i+1]==num[i] and num[i+1]==num[i+2]:
                maxi = max(maxi, 3*num[i])
        print(maxi)
        return str(maxi)


        