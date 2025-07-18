class Solution {
public:
    int addDigits(int num) {
        while(num/10){
            int dig = num; 
            int res = 0;
            while(dig){
                res+= dig%10; dig/=10; 
            }
            num = res;
        }

        return num; 
    }
};