class Solution {
public:
    int countAsterisks(string s) {
        
        bool dhia = true; 
        int count = 0; 
        for(char c : s){
            if(c == '|') { dhia = !dhia; }
            if(dhia && c=='*' ) count++; 
        }
        return count; 
    }
};