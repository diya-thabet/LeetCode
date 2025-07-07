class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0; 
        for(auto s : sentences){
            int x = 0; 
            for(char c : s){
                if(c == ' ') x++;
            }
            maxi = max(maxi, x); 
        }

        return maxi+1; 
    }
};