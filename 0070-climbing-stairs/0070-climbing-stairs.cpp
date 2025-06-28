class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=2) return n; 
        n++;
        vector<int> v(n); 
        v[n-1]=1; v[n-2]=1; 
        for(int i = n-3; i>=0; i--){
            v[i]=v[i+1]+v[i+2]; 
        }
        return v[0]; 
    }
};