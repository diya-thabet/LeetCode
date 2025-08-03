class Solution {
    public int maximizeSum(int[] nums, int k) {
        int res = 0; 
        int n = nums.length -1; 
        for(int i: nums){
            res= Math.max(res, i);
        }
      
        return ((k)*res + ((k-1)*k)/2) ;
    }
}