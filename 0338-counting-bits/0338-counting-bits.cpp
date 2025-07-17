

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res; 
        res.push_back(0); 
        for(int i = 1 ; i<=n ; i++){
            int c = i, bit = 0; 
            while(c){
                if(c&1) bit++;
                c=c>>1; 
            }
            res.push_back(bit);
        }

        return res; 
    }
};