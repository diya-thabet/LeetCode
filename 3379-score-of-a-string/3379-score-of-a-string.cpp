class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0 ; 
        for(int i=0 ; i<s.size()-1; i++) sum += abs((int)(s[i+1]-s[i])); 
        return sum; 
    }
};