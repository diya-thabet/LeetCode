class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0); flowerbed.push_back(0); 
        int count = 0; 
        for(int i : flowerbed) if(i) count++; 

        int maxi = 0; 
        for(int i = 1 ; i<flowerbed.size()-1 ;i++ ){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i] = 1; 
            }
        }
        for(int i : flowerbed) if(i) maxi++; 
        return n<=maxi - count; 
    }
};