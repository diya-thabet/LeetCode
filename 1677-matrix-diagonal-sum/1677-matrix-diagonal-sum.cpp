class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size(); 
        if(n==1) return mat[0][0]; 
        int sum = 0; 
        for(int i = 0 ;i<n; i++){
            sum+= mat[i][i]; 
            //cout << mat[i][i] << endl; 
            //cout << mat[n-i-1][n-i-1] << endl; 
            //cout << endl; 
            if(n-i-1 != i) sum+= mat[i][n-i-1];
        }

        return sum; 
    }
};