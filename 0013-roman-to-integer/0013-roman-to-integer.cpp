class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> roman;
        roman['I']=1; roman['V']=5; roman['X']=10; roman['L']=50; roman['C']=100; roman['D']=500; roman['M']=1000; 
        reverse(s.begin(), s.end()) ; 
        int y = s.size()-1 ;
        
        int res = 0 ;

        int m = res; 

        for (int i = 0; i < y+1; ++i)
        {
        	if (roman[s[i]] >= m)
        	{
        		if (roman[s[i]] > m)
        		{
        			m=roman[s[i]];
        		}
        		res += roman[s[i]];  
        	} else res-= roman[s[i]]; 
        }
        return res; 
    }
};