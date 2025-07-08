class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int res1 = 0, res2 = 0; 
        for(int i : nums1){
            for(int j : nums2){
                if(i==j) {res1++;  break; }
                
            }
        }
        for(int i : nums2){
            for(int j : nums1){
                if(i==j) {res2++;  break;}
            }
        }

        return {res1, res2}; 
    }
};