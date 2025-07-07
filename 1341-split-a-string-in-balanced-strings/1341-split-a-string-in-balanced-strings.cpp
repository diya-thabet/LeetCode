class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0; int res = 0; 
        for(char c : s){
            if(c == 'L') l++; 
            if(c=='R') l--; 
            if(!l) res++; 
        }

        return res; 
    }
};