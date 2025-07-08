class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ress = 0; 
        for(string s : words){
            bool res = true; 
            //string ss =s; 
            for(int i = 0; i<pref.size() ; i++){
                if(pref[i]!=s[i]) {
                    res = false; 
                    break; 
                }
            }
            if(res) ress++; 
            
        }
        return ress; 
    }
};