class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX; 
        for(int i = 0; i<nums.size(); i++){
            int x = 0; 
            while(nums[i]>0){
                x+= nums[i]%10; 
                nums[i]/=10; 
            }

            mini = min(mini, x); 
        }

        return mini; 
    }
};