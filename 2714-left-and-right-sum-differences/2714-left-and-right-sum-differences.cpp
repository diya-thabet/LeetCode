class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left = 0, right = 0;
        vector<int> res; 
        for(int i = 0 ; i<nums.size(); i++ ){
            for(int j = i+1 ; j<nums.size(); j++ ){
                left+=nums[j];
            }
            if(i>0) right += nums[i-1];
            res.push_back(abs(left-right));
            cout << left << " " << right << endl ; 
            left = 0;
        }

        return res; 
    }
};