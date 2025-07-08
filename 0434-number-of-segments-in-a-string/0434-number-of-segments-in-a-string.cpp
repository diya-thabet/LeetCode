class Solution {
public:
    int countSegments(string s) {
        int words = 0;
        for(int i = 0, n = s.length(); i < n; ++i){
            if (s[i] != ' ' && s[i + 1] == ' ' || s[i] != ' ' && s[i + 1] == '\0') ++words;
        } 
        return words;
    }
};