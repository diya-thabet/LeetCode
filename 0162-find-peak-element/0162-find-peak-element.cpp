class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0; 
        int i= 1 , j= nums.size()-2; 
        if(nums[0]>nums[1]) return 0; 
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;

        if(nums[nums.size()-2]<nums[nums.size()-1]) return nums.size()-1; 
        while(i<=j){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i; else i++;
            if(nums[j]>nums[j-1] && nums[j]>nums[j+1]) return j; else j--; 
        }
        return -1; 
    }
};