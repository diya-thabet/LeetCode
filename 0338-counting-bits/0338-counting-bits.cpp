class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n + 1);
        v.at(0) = 0;
        if (n > 0) {
            v.at(1) = 1;
        }
        for (int i = 2; i < n + 1; i++) {
            if (i % 2 != 0) {
                v.at(i) = v.at(i - 1) + 1;
            }
            else {
                v.at(i) = v.at((i / 2));
            }
        }
        return v;
    }
};