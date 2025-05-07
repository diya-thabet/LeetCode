class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}}; 
        if(numRows==2) return {{1}, {1,1}}; 
        vector<vector<int>> m = {{1}, {1,1}} ; 
        for(int i = 2; i<numRows ; i++){
            vector<int> v; 
            v.push_back(1); 

            for(int j=1; j<i ; j++){
                v.push_back(m[i-1][j]+m[i-1][j-1]); 
            }
            v.push_back(1); 
            m.push_back(v); 
        }
        return m; 
    }
};