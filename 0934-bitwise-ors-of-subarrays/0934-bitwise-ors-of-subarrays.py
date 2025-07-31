class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        x=0
        res = set()
        print(arr)
        for i in range(len(arr)):
            res.add(arr[i])
            x|= arr[i]
            res.add(x)
            v=arr[i]
            for j in range(i, len(arr)):
                v|= arr[j]  
                res.add(v)  
            
            v= arr[i]
            for j in range(i, -1, -1):
                v|= arr[j]  
                res.add(v)  
            
        print(res)     
            
        return len(res)
