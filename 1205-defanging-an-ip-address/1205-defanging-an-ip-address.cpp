class Solution {
public:
    string defangIPaddr(string address) {
        string s="" ; 
        for(char c : address){
            if (c=='.'){
                s+="[.]" ; 
                continue;
            }
            s+=c ;
        }
        return s ; 
    }
};