class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i =0;
        vector<int> res; 
        while(i<nums.size()){
            int left = 0, right = 0; 
            
            if(i>0){
                for(int j = i-1; j>=0 ; j--){
                    if(nums[j]<nums[i]) left++; 
                }
            }
            
            if(i<nums.size()){
                for(int j = i+1; j<nums.size() ; j++){
                    if(nums[j]<nums[i]) right++; 
                }
            }
            
            res.push_back(left + right); 
            cout << left << " " << right << endl;
            i++;
        }

        return res; 
    }
};