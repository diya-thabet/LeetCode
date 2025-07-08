class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0; 
        for(int i = low ; i<=high ; i++){
            int n = i; 

            //count length of a number
            int count = 0; 
            while(n>0){
                count++; 
                n/=10; 
            }

            // if count is not even number we should not consider
            if(count%2 != 0) continue; 

            int left = 0 , right = 0; n=i; 
            for(int j = 0; j<count/2 ; j++){
                left += n%10; n/=10; 
            } 
            for(int j = count/2; j<count ; j++){
                right += n%10; n/=10; 
            }

            if(right == left) res++; 

        }

        return res; 
    }
};