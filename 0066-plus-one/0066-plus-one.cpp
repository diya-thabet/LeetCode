class Solution {
public:
    vector<int32_t> plusOne(vector<int32_t>& ddd) {
        for (int8_t i = ddd.size() - 1; i >= 0; --i) {
            if (ddd[i] < 9) {
                ddd[i]++; // No carry, just return
                return ddd;
            }
            ddd[i] = 0; // Set to 0 and carry to next digit
        }

        // If we reach here, it means we had a carry all the way (like 999 → 1000)
        ddd.insert(ddd.begin(), 1); // Only one insert at the end
        return ddd;
    }
};
