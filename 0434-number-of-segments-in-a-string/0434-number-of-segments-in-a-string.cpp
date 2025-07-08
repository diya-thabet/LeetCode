class Solution {
public:
    int countSegments(string s) {
        s = s+' ';
        int n = s.length();
        int count=0;
        int i=0;
        while(s[i]==' ') i++;
        for(;i<n;i++){
            if(s[i]==' '){
                while(s[i]==' '){
                    i++;
                }
                count++;
            }
        }
        return count;
    }
};