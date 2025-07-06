class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int x = 0; 

        for(int i ; i<accounts.size(); i++){
            int sum = 0; 
            for(int j=0 ; j<accounts[i].size(); j++){
                sum+=accounts[i][j]; 
            }
            x = max(x, sum); 
        }

        return x; 
    }
    
};