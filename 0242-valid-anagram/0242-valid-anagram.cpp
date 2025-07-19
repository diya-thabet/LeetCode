class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false; 

        vector<int> ss(26, 0), tt(26, 0); 
        for(char c : s) ss[c-'a']++;
        for(char c : t) tt[c-'a']++; 
        for(int i = 0 ; i<26 ; i++){
            if(tt[i]!=ss[i]) return false; 
        }
        return true; 
    }
};