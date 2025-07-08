class Solution {
public:
    int pivotInteger(int n) {
        
        for(int i = 1; i<=n ; i++){
            //cout << (i*(1+i))/2 << " " << (n-i)*(i+n)/2 << endl; 
            if( (i*(1+i)) == (n-i+1)*(i+n) ) return i; 
        } 

        return -1; 
    }
};