class Solution {
public:
    int16_t findMin(vector<int32_t>& nums) {
        if(nums.size()==1) return nums[0]; 
        int16_t i = 0 , j = nums.size()-1 ; 
        if(nums[i]<nums[j]) return nums[i]; 
        while(i<j){
            if(nums[i+1] > nums[i]) i++; else return nums[i+1]; 
            if(nums[j-1]<nums[j]) j--; else return nums[j]; 
        }
        return -1; 
    }
};