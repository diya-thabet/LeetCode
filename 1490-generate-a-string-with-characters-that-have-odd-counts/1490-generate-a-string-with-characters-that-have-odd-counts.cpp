class Solution {
public:
    string generateTheString(int n) {
        if(n==1) return "a"; 
        string res = ""; 
        if(n%2==0){
            for(int i =0 ;i<n-1 ; i++){
                res+='a'; 
            }
            res+='b';
        }
            else {
                for(int i =0 ;i<n-2; i++){
                    res+='a'; 
                }
                res+='b'; 
                res+='c';
            }

        return res; 
    }
};