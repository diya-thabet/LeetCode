class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, bool> m; 
        int t = 0; 
        for(char c : allowed) m[c]=true; 

        for(string s : words){
            bool res = true; 
            for(char c : s){
                if(m[c]!=true) res = false; 
            }
            t = res ? t+1 : t; 
        }
        return t; 
    }
};