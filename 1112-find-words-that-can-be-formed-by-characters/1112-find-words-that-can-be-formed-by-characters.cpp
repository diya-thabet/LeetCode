class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0; 
        vector<int> c(26, 0); 
        for(char cc : chars) c[cc-'a']++; 

        for(auto s : words){
            vector<int> w(26, 0); 
            for(char cc : s) w[cc-'a']++;
            for(int i = 0 ; i<26 ; i++){
                if(w[i]>c[i]) goto label; 
            }
            res+= s.size(); 
            label:
        }

        return res; 
    }
};