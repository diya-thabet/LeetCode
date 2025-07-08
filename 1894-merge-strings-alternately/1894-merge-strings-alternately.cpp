class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.size(), word2.size()); 
        string res = ""; 
        for(int i = 0; i<n ; i++){
            res+=word1[i]; res+=word2[i];
        }
        if(word1.size() > word2.size()){
            for(int i = n; i<word1.size() ; i++){
                res+=word1[i]; 
            }
        } else{
            for(int i = n; i<word2.size() ; i++){
                res+=word2[i]; 
            }

        }

        return res; 
    }
};