class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.size(); 
        for(int i=0 ; i<=haystack.size(); i++){
            
            string subs = haystack.substr(i, len); 
            //cout << subs << endl; 
            if (subs==needle){
                return i; 
            }
            if(i+len>haystack.size()) break; 
        }
        return -1; 
    }
};