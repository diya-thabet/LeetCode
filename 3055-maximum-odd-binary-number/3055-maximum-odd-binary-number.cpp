class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = 0; 
        for(char c : s) if(c=='1') n++;
        for(int i = 0 ; i<s.size(); i++)s[i]='0';
        for(int i = 0 ; i<n-1; i++)s[i]='1'; 
        s[s.size()-1] = '1'; 

        return s; 
        
    }
};