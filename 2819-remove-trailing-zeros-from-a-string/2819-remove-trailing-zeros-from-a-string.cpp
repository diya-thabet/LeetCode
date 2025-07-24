class Solution {
public:
    string removeTrailingZeros(string num) {

        while(num[num.size()-1]=='0'){
            num.erase(num.size()-1, 1);
        }

        return num;
    }
};