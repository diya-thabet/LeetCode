class Solution {
public:
    int subtractProductAndSum(int n) {
        int res = 1, sum = 0; 
        while(n>0){
            sum+= n%10; 
            res*= n%10; 
            n/=10; 
        }

        return res-sum; 
    }
};