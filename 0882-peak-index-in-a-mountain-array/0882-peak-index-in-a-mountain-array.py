class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        if len(arr) <=2:
            if max(arr)==arr[0]:
                return 0
            else :
                return 1
        i = int(len(arr)/2)
        while 1:
            print(i)
            if arr[i]>=arr[i+1] and arr[i]>=arr[i-1]:
                break
            if arr[i-1]>=arr[i] :
                i-=1
                continue
            if arr[i+1]>=arr[i-1] :
                i+=1
                continue
        
        return i