class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = 0; 
        int res = x^y;
        for(int i=0 ; i<32 ; i++){
            if((res & 1)) t++; 
            res = res >> 1; 
        }
        return t; 
    }
};