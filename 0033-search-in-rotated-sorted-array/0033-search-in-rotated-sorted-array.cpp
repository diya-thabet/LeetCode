class Solution {
public:
    int16_t search(vector<int32_t>& nums, int32_t target) {
        int16_t i = 0, j = nums.size()-1; 
        while(i<=j){
            if(nums[i]== target) return i; 
            if(nums[j]== target) return j; 
            if(nums[i]>nums[j]) i++; else j--;      
        }
        return -1; 
    }
};