class Solution {
public:
    int32_t maxProduct(vector<int32_t>& nums) {
        sort(nums.begin(),nums.end());
        uint16_t n=nums.size();
        return(nums[n-1]-1)*(nums[n-2]-1);
    }
};