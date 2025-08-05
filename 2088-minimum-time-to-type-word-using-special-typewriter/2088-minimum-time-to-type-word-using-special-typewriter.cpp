class Solution {
public:
    int minTimeToType(string word) {
        char c = 'a';
        int res = 0;

        for (char i : word) {
            int diff = abs(i - c);
            res += min(diff, 26 - diff) + 1;
            c = i;
        }

        return res;
    }
};
