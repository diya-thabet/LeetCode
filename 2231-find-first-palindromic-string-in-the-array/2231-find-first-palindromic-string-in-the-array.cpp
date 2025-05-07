class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words) if(valid(s)) return s; 
        return ""; 
    }

    bool valid(string s){
        for(int i = 0; i< s.size()/2; i++ ){
            if(s[i]!=s[s.size()-1-i]) return false; 
        }
        return true; 
    }
};