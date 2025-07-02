class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
    unordered_set<string> res;
    for(string s : words){
        string word = ""; 
        for(char c : s) word+=morse[(int)(c-'a')]; 
        res.insert(word); 
        
    }
    return res.size(); 

    }
};