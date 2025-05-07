#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndexMap;

        // Traverse the input vector
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the hash table
            auto it = numIndexMap.find(complement);
            if (it != numIndexMap.end()) {
                // Found the pair that sums up to the target
                return {it->second, i};
            }

            // Add the current number and its index to the hash table
            numIndexMap[nums[i]] = i;
        }

        // No solution found
        return {};
    }
};