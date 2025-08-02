from typing import List

class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        hash_map = zip(names, heights) 
    
        sorted_items = sorted(hash_map, key=lambda item: item[1], reverse=True)  
        return [name for name, height in sorted_items]  