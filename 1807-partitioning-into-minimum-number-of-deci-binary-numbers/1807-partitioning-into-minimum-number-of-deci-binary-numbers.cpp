class Solution {
public:
    int minPartitions(string n) {
        int maxi = 0; 
        for(char c : n){
            maxi = max(maxi, (int)(c-'0') );
        }
        return maxi; 
    }
};