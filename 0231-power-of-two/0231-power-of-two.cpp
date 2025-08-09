class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res = 1;
        if(n<=0) return false; 
        
        for (int i = 0; i < 32; i++) {
            if(n&1 == 1) res--; 
            if(res <0) return false; 
            n= n>>1; 
        }
        cout << res << endl; 

        return true;
    }
};