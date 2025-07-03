class Solution {
public:
    int maxFreqSum(string s) {
        int alpha[26]; memset(alpha, 0, sizeof(alpha));
        for(char c : s){
            alpha[c-'a']++; 
        }
        int maxV = 0, maxC = 0; 
        for(char c : s){
            if(c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u'){
                maxV = max(maxV, alpha[c-'a']);
            } else maxC = max(maxC, alpha[c-'a']);
        }

        return maxV + maxC ;
    }
};