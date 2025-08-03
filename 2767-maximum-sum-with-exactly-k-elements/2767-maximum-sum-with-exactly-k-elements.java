class Solution {
    public int maximizeSum(int[] nums, int k) {
        
        int n = nums.length -1; 
        Arrays.sort(nums);
        int res= nums[n];
      
        return ((k)*res + ((k-1)*k)/2) ;
    }
}