class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        res = len(fruits)
        n= len(fruits)
        l = [True for k in range(n)]
        for i in range(n):
            
            for j in range(n):
                if baskets[j] >= fruits[i] and l[j]:
                    l[j]= False
                    res-=1
                    break
        return res
                