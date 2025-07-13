class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end()); 
        sort(trainers.begin(), trainers.end()); 
        int i = trainers.size()-1; 
        int j = players.size()-1; 
        int res = 0; 
        while(i>=0 && j>=0){
            //cout << i << " " << j << endl; 
            if(trainers[i]<players[j]){
                j--; 
            }else if(trainers[i]>=players[j]){
                res++; j--; i--; 
            }

        }
        return res; 
    }
};