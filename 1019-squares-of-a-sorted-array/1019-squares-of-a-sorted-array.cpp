class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> v(n); 
        int i = 0 , j = n-1 , pos = n-1 ;
        while(i<=j){
            int vi = nums[i]*nums[i]; 
            int vj = nums[j]*nums[j]; 

            if(vi>vj){
                v[pos--] = vi;
                i++; 
            }
            else{
                v[pos--] = vj;
                j--;
            }
        }

        return v; 
    }
};