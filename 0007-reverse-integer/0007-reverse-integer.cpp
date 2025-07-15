class Solution {
public:
    int reverse(int x) {
        if(x<= INT_MIN || x>=INT_MAX) return 0; 
        

        // inverse the x 
        int sign = x>=0 ? 1 : -1; 
        string s = to_string(abs(x)); 
        string ss = ""; 
        for(int i = s.size()-1 ; i>=0 ; i--){
            ss+= s[i]; 
        }

        long long res = sign * stoll(ss); 

        return  res <= INT_MIN || res >= INT_MAX ? 0 : res; 
    }
};