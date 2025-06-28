class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> s1;
        int res=0;
        for(auto it:stones){
            s1[it]++;
        }
        for(auto it:jewels){
            res+=s1[it];
        }
        return res;
    }
};