class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        reverse(arr.begin(), arr.end()); 
        map<int, int> m; 
        //for(int i : arr) m[i]=0; 
        for(int i : arr) m[i]+=1; 
        for(int i : arr) { if(i==m[i]) return i; }

        //for(int i : arr) cout << i << " " << m[i] << endl ;
        return -1; 
    }
};