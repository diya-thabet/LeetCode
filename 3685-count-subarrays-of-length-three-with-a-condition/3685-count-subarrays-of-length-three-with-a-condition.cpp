class Solution {
public:
    int8_t countSubarrays(vector<int>& nums) {
        int8_t res = 0;
        int8_t i = 0 , j = nums.size()-1; 
        while(i+2<nums.size() && i+2<=j){
            if(i+2==j && nums[i]+nums[i+2] == (float)nums[i+1]/2){
                res++;
                break; 
            }
            if(nums[i]+nums[i+2] == (float)nums[i+1]/2) {
                res++;
            }
            if(nums[j]+nums[j-2] == (float)nums[j-1]/2) {
                res++;
            }
            i++; 
            j--;
        }
        return res ; 
    }
};