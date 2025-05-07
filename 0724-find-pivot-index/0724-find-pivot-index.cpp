class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //int i = 0, j= nums.size()-1 ; 
        //int sumi = 0, sumj = 0 ; 
        int sum  = 0 ; 
        for(int k : nums) sum+= k ;
        if(sum-nums[0] == 0) return 0;  
        int cop = 0; 
        for(int i = 0 ;i<nums.size()-1 ; i++){
            cop+= nums[i]; 
            if(cop == sum - nums[i+1] -cop) return i+1;
        }
        return -1; 
    }
};