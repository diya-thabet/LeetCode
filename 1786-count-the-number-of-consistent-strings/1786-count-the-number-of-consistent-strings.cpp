class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int m[26]; 
        memset(m, 0, sizeof(m)); 

        int t = 0; 
        for(char c : allowed) m[(int)(c-'a')]=true; 

        for(string s : words){
            bool res = true; 
            for(char c : s){
                if(m[(int)(c-'a')]!=true) res = false; 
            }
            t = res ? t+1 : t; 
        }
        return t; 
    }
};