class Solution:
    def reverseWords(self, s: str) -> str:
        s1 = s.split()
        result = []
        for i in s1:
            x = i[::-1]
            result.append(x)
        return ' '.join(result)