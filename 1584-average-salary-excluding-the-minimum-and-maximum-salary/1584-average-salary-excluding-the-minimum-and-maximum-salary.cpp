class Solution {
public:
    double average(vector<int32_t>& salary) {
        sort(salary.begin(), salary.end()); 
        double res = 0; 
        for(int32_t i : salary) res+= i; 
        res = res - salary[0] - salary[salary.size()-1]; 
        return res/(salary.size()-2); 
    }
};