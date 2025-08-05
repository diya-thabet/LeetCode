class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        p=[]
        g=[]
        l=[]
        for i in nums:
            if i < pivot:
                l.append(i)
            if i==pivot:
                p.append(i)
            if i>pivot:
                g.append(i)
        return l+p+g