class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {273.15+celsius , 1.8*celsius + 32}; 
    }
};