class Solution {
public:
    int16_t maximumCount(vector<int32_t>& nums) {
        int16_t negatives = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int16_t positives = nums.end() - upper_bound(nums.begin(), nums.end(), 0);
        return max(negatives, positives);
    }
};
