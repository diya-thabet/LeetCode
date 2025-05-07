class Solution {
public:
    int hammingWeight(int32_t n) {
        short res = 0 ; 
        for(short i = 0 ; i<32 ; i++) {
            if(n&1) res++ ;
            n = n >> 1; 
        }  
        return res; 
    }
};