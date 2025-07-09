class Solution {
public:
    int countEven(int num) {
        int temp = num, sum = 0;
        while(temp){
            sum += temp % 10;
            temp /= 10;
        }
        return sum % 2 ? --num / 2 : num / 2;
    }
};