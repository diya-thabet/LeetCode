class Solution:
    def sortSentence(self, s: str) -> str:
        d = s.split()
        s=""
        i = 0
        while i<=len(d) :
            for ss in d:
                if int(ss[-1]) == i:
                    s+= ss[:-1] + " "
            i+=1
        return s[:-1]
            

        