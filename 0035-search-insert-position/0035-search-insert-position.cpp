class Solution {
public:
    int32_t searchInsert(vector<int32_t>& nums, int32_t target) {
        int32_t i = 0, j= nums.size()-1; 
        if(target<=nums[0]) return 0; 
        if(target == nums[j]) return j;
        if(target > nums[j]) return j+1; 
        while(i<=j){
            if(target >= nums[i] && target<=nums[i+1]) return i+1; 
            if(target <= nums[j] && target>nums[j-1]) return j;
            i++; j--; 

        }
        return -1; 
    }
};