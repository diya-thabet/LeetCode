class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0; int res = 0; 
        for(char c : s){
            if(c == 'L') l++; 
            if(c=='R') r++; 
            if(l==r) res++; 
        }

        return res; 
    }
};