class Solution {
public:
    bool isValid(string s) {
        stack<char> pile ; 
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{' ) {pile.push(s[i]); continue;}
            if( (s[i]==']' || s[i]==')' || s[i]=='}')&&pile.empty() ) return false; 

            if((s[i]==']' && pile.top()=='[' )|| (s[i]==')'&& pile.top()=='(' )|| (s[i]=='}' && pile.top()=='{')) 
                pile.pop();
            else return false ; 
        }
        return pile.empty(); 
    }
};