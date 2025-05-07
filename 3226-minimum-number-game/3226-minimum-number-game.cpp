class Solution {
public:
    vector<int32_t> numberGame(vector<int32_t>& nums) {
        sort(nums.begin(), nums.end());  
        for(int8_t i= 0 ; i<nums.size(); i+=2) swap(nums[i], nums[i+1]); 
        return nums; 
    }
};