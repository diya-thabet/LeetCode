class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //rowIndex++; 
        if(rowIndex == 0) return{1} ;
        vector<int> v ; 
            v.push_back(1); 

            for(int j=1; j<rowIndex ; j++){
                v.push_back(cc(rowIndex, j)); 
            }
            v.push_back(1); 
            return v; 
        }
        

        long long cc(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k; // Use symmetry property

    long long res = 1;
    for (int i = 0; i < k; i++) {
        res = res * (n - i) / (i + 1);
    }
    
    return res;
}

    
    };