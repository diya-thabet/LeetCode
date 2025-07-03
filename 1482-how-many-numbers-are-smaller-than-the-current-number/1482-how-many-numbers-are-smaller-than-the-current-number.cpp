class Solution {
public:// perfect approach
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n =nums.size();

        map<int,int>mp;

        vector<int>nums2 = nums;

        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums2.size();i++){
            if(mp.count(nums2[i]) == 0){
                mp[nums2[i]] = i;
            }
        }

        vector<int>result;
        for(int num : nums){
            result.push_back(mp[num]);
        }
        return result;
    }
};

