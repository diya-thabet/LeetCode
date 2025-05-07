class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int div = 0; 
        for(int i : nums)
         div += min(i%3, 1) ; 

        return div; 
    }
};