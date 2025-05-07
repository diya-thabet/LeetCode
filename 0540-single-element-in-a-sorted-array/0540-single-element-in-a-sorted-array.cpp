class Solution {
public:
    int32_t singleNonDuplicate(vector<int32_t>& nums) {
        int32_t i = nums[0]; 
        for(int32_t j = 1 ; j < nums.size(); j++) i= i^nums[j]; 

        return i;  
    }
};