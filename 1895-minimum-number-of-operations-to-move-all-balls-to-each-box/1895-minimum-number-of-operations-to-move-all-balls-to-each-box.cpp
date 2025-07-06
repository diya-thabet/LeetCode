class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v; 
        for(int i = 0; i<boxes.size(); i++){
            int x = 0;
            for(int j = 0; j<boxes.size(); j++){
                if(i == j) continue; 
                
                if(boxes[j]=='1'){
                    x+=abs(i - j); 
                }

            }
            v.push_back(x);  
        }

        return v; 
        
    }
};