class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int t=0;
        for( int i : hours){
            if(i>=target)t++; 
        }
        return t; 
    }
};