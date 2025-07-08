class Solution {
public:
    int maxDepth(string s) {
        int now = 0; 
        int maxi = 0; 
        for(char c : s){
            if(c=='(') now++; 
            if(c==')') now--;

            maxi = max(maxi, now); 
        }

        return maxi; 
    }
};