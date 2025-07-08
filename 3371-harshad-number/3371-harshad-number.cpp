class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int xx = x; 
        int s = 0; 
        while(x>0){
            s+= x%10; 
            x/=10; 
        }
        if(xx%s == 0) return s; else return -1; 

        
    }
};