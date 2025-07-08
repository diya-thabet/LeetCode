class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0; 
        int now = 0; 
        for(int i : gain){
            now+=i; 
            maxi  = max(maxi, now); 
        }

        return maxi; 
    }
};