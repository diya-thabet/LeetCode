class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c = 1;
        for(int i : nums){
            if(i<0) c = -1*c; 
            if(i==0) return 0; 
        }

        return c; 
    }
};