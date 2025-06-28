class Solution {
public:
    int differenceOfSums(int n, int m) {

        // not div
        int not_div_m = n/m;
        int notDiv = 0; 
        for(int i = 1; i<=not_div_m ; i++){
            notDiv+= i * m; 
        }

        return (n*(n+1))/2 -2*notDiv; 
    }
};