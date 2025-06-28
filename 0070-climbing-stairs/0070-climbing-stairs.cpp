class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=2) return n; 
        n++;
        double phi = (1 + sqrt(5)) / 2;
        return round(pow(phi, n) / sqrt(5));
    }
};