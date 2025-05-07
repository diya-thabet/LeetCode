class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        float sum = 0 ;
        sort(p.begin(), p.end());  
        int i  = 0 , j=p.size()-1 ; 
        while(i<=j){
            sum++;
            if(p[i]+p[j]<=limit){i++; j--; }
            else { j--;}
        }
        return sum; 
    }
};