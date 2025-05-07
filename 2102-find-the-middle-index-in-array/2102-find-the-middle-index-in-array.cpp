class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum  = accumulate(nums.begin(), nums.end(), 0); 
        if(sum-nums[0] == 0) return 0;  
        int cop = 0; 
        for(int i = 0 ;i<nums.size()-1 ; i++){
            cop+= nums[i]; 
            if(cop == sum - nums[i+1] -cop) return i+1;
        }
        return -1; 
    }
};