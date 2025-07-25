class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        res = ""
        for i in s:
            res+=f"{i[::-1]} "
        return res[0:len(res)-1]