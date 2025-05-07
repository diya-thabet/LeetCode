class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0 , slow2 = 0; 
        do{
            slow = nums[slow]; 
            slow2 = nums[nums[slow2]]; 
        }while(slow != slow2);

        slow2 = 0; 
        do{
            slow2 = nums[slow2]; 
            slow = nums[slow];  
        }while(slow2!=slow);

        return slow; 
    }
};
