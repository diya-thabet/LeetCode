class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0, j = 0; 
        for(char c : moves){
            if(c=='R') i++; 
            if(c=='L') i--; 
            if(c=='U') j++; 
            if(c=='D') j--; 
        }

        return i==0 && j==0;
    }
};