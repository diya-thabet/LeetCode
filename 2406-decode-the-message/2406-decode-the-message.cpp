class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> map(26); // map[original - 'a'] = decoded
        vector<bool> seen(26, false);
        char cur = 'a';

        for (char c : key) {
            if (c != ' ' && !seen[c - 'a']) {
                seen[c - 'a'] = true;
                map[c - 'a'] = cur++;
            }
        }

        string res;
        for (char c : message) {
            if (c == ' ') res += ' ';
            else res += map[c - 'a'];
        }

        return res;
    }
};
