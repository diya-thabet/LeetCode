class Solution {
public:
    int alternateDigitSum(int n) {
        int res = 0, sign=1; 
        string s = to_string(n); 
        for(char c : s) {res+=sign*((int)(c-'0')); sign*=-1;}
        return res; 
    }
};