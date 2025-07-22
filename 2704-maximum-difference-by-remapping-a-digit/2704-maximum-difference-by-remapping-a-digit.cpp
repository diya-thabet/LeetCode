class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num); string mini = s; 
         
        int index = 0; 
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]=='9' && index == i) index++; else break; 
        }

        int indexMin = 0; 
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]=='0' && indexMin == i) index++; 
            else break; 
        }

        char c = s[index];
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]==c ) s[i] = '9'; 
        }

        c = mini[indexMin]; 
        for(int i = 0 ; i<s.size(); i++){
            if(mini[i]==c ) mini[i] = '0'; 
        }

        return stoi(s) - stoi(mini); 
    }
};