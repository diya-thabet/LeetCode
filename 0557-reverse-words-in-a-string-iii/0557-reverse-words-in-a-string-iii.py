class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        result = []
        for i in s: 
            result.append(i[::-1])
        return ' '.join(result)