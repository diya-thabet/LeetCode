class Solution {
public:
    int possibleStringCount(string word) {
        int t = 1; 
        char old =' '; 
        for(char c : word){
            if(old == c) t++; 
            old = c; 
        }

        return t; 
    }
};