class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int left[1000], right[1000];
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));

        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] + nums[i - 1];
        }

        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < n; ++i) {
            int x = abs(left[i] - right[i]);
            res.push_back(x);
        }

        return res;
    }
};
