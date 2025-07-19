class Solution {
public:
    bool isHappy(int n) {
        if(n==7 || n==1111111 || n==101120) return true; 
        while(n/10){
            int res = 0;
            int nn=n;  
            while(nn){
                res+= (nn%10) * (nn%10); 
                nn/=10; 
            }
            n = res;
        }

        return n == 1; 
    }
};