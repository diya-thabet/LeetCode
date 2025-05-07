class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0 ;
        int j = numbers.size()-1 ; 
        while(numbers[j]+numbers[i] != target && i<j){
            if(numbers[j]+numbers[i]>target) j--; 
            else i++ ; 
        }
        vector<int> v = { i+1, j+1} ; 
        return v ;
    }
};