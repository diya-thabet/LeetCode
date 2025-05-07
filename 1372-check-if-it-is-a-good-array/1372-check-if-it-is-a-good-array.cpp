class Solution {
public:
    bool isGoodArray(vector<int32_t>& nums) {
        int32_t g = 0; 
        for(int32_t x : nums) {g = __gcd(g, x);
        if(g==1) return true;}
        return false ; 
    }
};