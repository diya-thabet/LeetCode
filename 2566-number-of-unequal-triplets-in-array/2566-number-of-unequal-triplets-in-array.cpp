class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        // Step 1: Count frequency of each number
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Calculate unequal triplets
        int result = 0;
        int left = 0;
        int total = nums.size();

        for (auto& [num, count] : freq) {
            int right = total - left - count;
            result += left * count * right;
            left += count;
        }

        return result;
    }
};