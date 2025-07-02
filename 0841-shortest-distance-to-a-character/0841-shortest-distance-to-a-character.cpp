class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size(); 
        vector<int> res; 
        for(int k = 0 ; k<n; k++){
            int i = k , j = k; 
            if(c == s[k]){
                res.push_back(0);
                continue; 
            }
            else{
                while(!(s[i] == c || s[j] == c)){
                    
                    if(i-1>=0 && s[i]!=c) i--; 
                    if(j+1<n && s[j]!=c) j++;

                }
                if(s[i] == c && s[j] == c ) res.push_back(min(k-i, j-k));
                else if(s[i] == c) res.push_back(k-i);
                else if(s[j] == c) res.push_back(j-k);
            }

        }

        return res; 
    }
};