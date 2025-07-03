class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& g) {
        vector<vector<int>> res; 
        for(int i = 1 ; i<g.size()-1; i++){
            vector<int> line;
            for(int j = 1 ; j<g.size()-1; j++){
                
                int max_value = std::max({g[i][j],g[i+1][j],g[i][j+1],g[i+1][j+1],g[i-1][j],g[i][j-1],g[i-1][j-1],g[i+1][j-1],g[i-1][j+1]});
                line.push_back(max_value);
            }
            res.push_back(line);
            line = {}; 

        }
        return res; 
    }
};