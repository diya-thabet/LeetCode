class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        std::reverse(num.begin(), num.end());
        
        auto it = num.begin();
        int add = 0;
        for (; it != num.end() && k > 0; ++it, k /= 10) {
            *it += (k % 10) + add;
            add = *it / 10;
            *it %= 10;
        }
        for (; it != num.end(); ++it) {
            *it += add;
            add = *it / 10;
            *it %= 10;
        }
        for (; k != 0; k /= 10) {
            num.emplace_back((k % 10) + add);
            add = num.back() / 10;
            num.back() %= 10;
        }
        if (add != 0) {
            num.push_back(add);
        }
        std::reverse(num.begin(), num.end());
        
        return std::move(num);
    }
};