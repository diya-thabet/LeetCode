class Solution {
public:
    bool checkString(string s) {
        //int x = 0; 
        for(int i=0; i<s.size()-1; i++){
            if(s[i]!=s[i+1] && s[i]=='b') return false; 
        }

        return true; 
    }
};