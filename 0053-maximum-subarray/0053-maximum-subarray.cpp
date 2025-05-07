class Solution {
public:
    int32_t maxSubArray(vector<int32_t>& nums) {
        int32_t t = 0 , res = nums[0]; 
        for(int32_t i : nums){
            t = t<0? 0 : t ;
            t+=i; 
            res = max(res, t); 
        }
        return res; 
    }
};