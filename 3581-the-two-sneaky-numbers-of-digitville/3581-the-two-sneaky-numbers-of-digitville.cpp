class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> m; 
        vector<int> res;
        /*for(int i : nums){
            
             m[i]= 0; 
        }*/
        for(int i : nums){
            if(m[i]>0) res.push_back(i);
            else m[i]++; 
        }
        return res; 
    }
};