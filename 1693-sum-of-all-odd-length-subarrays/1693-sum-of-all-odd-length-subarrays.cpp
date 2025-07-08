class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0; 
        int i = 1; 
        while(i<=arr.size()){
            for(int j = 0 ; j<arr.size(); j++){
                if( i+j > arr.size()) {
                    //cout << i+j << " nihaha " << arr.size() << endl; 
                    break;
                }
                for(int k = 0; k<i; k++){
                    
                    sum+= arr[k+j]; 
                    //cout << arr[k+j] << " "; 
                }
                cout << endl; 
            }
            i+=2; 
        }
        return sum; 
        
    }
};