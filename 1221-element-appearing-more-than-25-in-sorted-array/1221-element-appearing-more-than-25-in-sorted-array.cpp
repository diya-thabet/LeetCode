class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> m; 
        for(int i : arr){
            m[i]++;
        }
        for(int i : arr){
           if( m[i] > arr.size()/4) return i; 
        }

        return -1; 
    }
};