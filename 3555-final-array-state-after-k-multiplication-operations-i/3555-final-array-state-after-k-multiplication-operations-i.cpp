class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j = 0; j<k ; j++){

            int minn = INT_MAX; 
            int index = 0; 
            for(int i=0 ; i<nums.size() ; i++){
                if(nums[i]<minn) {minn = nums[i] ; index= i; }
            }
            nums[index]*=multiplier; 
        }

        return nums; 

    }
};