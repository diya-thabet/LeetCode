class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = ""; 
        while( columnNumber > 0){
            int i = (columnNumber-1)%26 ;
            res = (char)(i +'A') + res;
            columnNumber = (columnNumber-1)/26 ;
        }
        return res ;
    }
};