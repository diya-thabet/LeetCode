from typing import List

class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        n = len(nums)
        
        def is_strictly_increasing(sub_array: List[int]) -> bool:
            for i in range(len(sub_array) - 1):
                if sub_array[i] >= sub_array[i + 1]:
                    return False
            return True

        for a in range(n - 2 * k + 1):
            first_subarray = nums[a : a + k]
            
            second_subarray = nums[a + k : a + 2 * k]
            
            if is_strictly_increasing(first_subarray) and is_strictly_increasing(second_subarray):
                return True 
        
        return False