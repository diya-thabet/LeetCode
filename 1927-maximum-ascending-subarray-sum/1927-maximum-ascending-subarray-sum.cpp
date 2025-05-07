class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0;
        int sum = nums[0];
        for (int i=1;i<nums.size();i++) {
            if (nums[i-1] < nums[i]) {
                sum += nums[i];
            }
            else {
                res = max(sum,res);
                sum = nums[i];
            }
        }
        res = max(sum,res);
        return res;
    }
};