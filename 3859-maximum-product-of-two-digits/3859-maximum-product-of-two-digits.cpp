class Solution {
public:
    int maxProduct(int n) {
        
        vector<int> res; 
        while(n>0){
            res.push_back(n%10); 
            n/=10; 
        }
        sort(res.begin(), res.end()); 
        int nn = res.size()-1; 
        return res[nn]*res[nn-1]; 
    }
};