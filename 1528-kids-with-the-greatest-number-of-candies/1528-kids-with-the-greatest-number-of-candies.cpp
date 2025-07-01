class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi= 0; 
        for(int i : candies) maxi= max(i, maxi);
        vector<bool> res; 
        int n = candies.size();         
        for(int i = 0; i<n ; i++){
            res.push_back(candies[i]+extraCandies >= maxi); 
            
        }

        return res; 
    }
};