class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0, sum2 = 0; 
        for(int i : nums1) sum1+= i; 
        for(int i : nums2) sum2+= i; 
        sum1/=nums1.size(); sum2/=nums2.size(); 
        return (sum2 - sum1); 
    }
};