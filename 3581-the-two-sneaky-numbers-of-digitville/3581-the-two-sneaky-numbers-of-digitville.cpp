class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end()); 
        for(int i = 0 ; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]) res.push_back(nums[i]); 
        }
        return res; 
    }
};