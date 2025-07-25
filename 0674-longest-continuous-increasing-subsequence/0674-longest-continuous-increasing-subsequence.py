def find_length_of_LCIS(nums: list[int]) -> int:
    current_length = 1
    max_length = 1

    for num1, num2 in pairwise(nums):
        if num1 < num2:
            current_length += 1
            max_length = max(max_length, current_length)
        else:
            current_length = 1

    return max_length


class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        return find_length_of_LCIS(nums)