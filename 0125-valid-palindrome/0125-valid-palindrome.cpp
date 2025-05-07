class Solution {
public:
    bool isPalindrome(string s) {
        string ss=""; 
        for(char & c : s){
            c = tolower(c); 
        }
        for(char c : s){
            if(!iswalnum(c)) continue; 
            else ss+=c; 
        }
        s=ss; 
        s = string(s.rbegin(), s.rend()); 
        cout << ss;
        return ss==s;  
        
    }
};