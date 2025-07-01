class Solution {
public:
    int minBitFlips(int start, int goal) {
        int t = 0; 
        int res = start^goal;
        for(int i=0 ; i<32 ; i++){
            if((res & 1)) t++; 
            res = res >> 1; 
        }
        return t; 
    }
};