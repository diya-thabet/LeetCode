class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i<s.size(); i++){
            if(s[i] <='9' && s[i]>='0') s[i] = (( (s[i]-'0') + (s[i-1]-'a') ))%26 + 'a'; 
        }
        return s; 
    }
};