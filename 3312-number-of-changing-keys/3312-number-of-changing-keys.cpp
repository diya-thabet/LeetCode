class Solution {
public:
    int countKeyChanges(string s) {
        int res = 0; 
        for(int i = 0; i<s.size()-1; i++){
            if(toupper(s[i])!=toupper(s[i+1])) res++;
        }
        return res; 
    }
};