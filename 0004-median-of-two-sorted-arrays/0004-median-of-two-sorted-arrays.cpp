class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m = mergeSortedVectors(nums1, nums2); 
        if((nums1.size() + nums2.size())%2 == 0){
            return (double)(m[(m.size())/2] + m[((m.size())/2) -1 ])/2 ; 
        }
        else{
            return m[ceil((m.size())/2)]; 
        }
    }




    vector<int> mergeSortedVectors(const vector<int>& vec1, const vector<int>& vec2) {
        vector<int> merged;
        int i = 0, j = 0;
        while (i < vec1.size() && j < vec2.size()) {
            if (vec1[i] < vec2[j]) {
                merged.push_back(vec1[i++]);
            } else {
                merged.push_back(vec2[j++]);
            }
        }


        while (i < vec1.size()) {
            merged.push_back(vec1[i++]);
        }

        while (j < vec2.size()) {
            merged.push_back(vec2[j++]);
        }

        return merged;
    }

};