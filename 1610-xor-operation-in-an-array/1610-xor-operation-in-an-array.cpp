class Solution {
public:
    int xorOperation(int n, int start) {
        int x = 0; 
        for(int i = 0; i<n; i++){
            //cout << start+2*i << endl; 
            x= x ^ (start+2*i);
        }
        return x;
    }
};