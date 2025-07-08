class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size(); 
        for(int i = 0 ; i<n-1; i++){
            int dis = 0; 
            for(int j = i+1 ; j<n ; j++){
                if(prices[j] <= prices[i]) {dis = max(dis,prices[j] ); break; }
            }
            prices[i] = prices[i]-dis; 
        }

        return prices;
    }
};