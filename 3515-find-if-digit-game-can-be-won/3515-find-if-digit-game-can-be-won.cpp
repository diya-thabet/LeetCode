class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int res = 0; 
        for(int i : nums){
            if(i>9) res-=i; else res+=i;
        }
        return res!=0; 
    }
};