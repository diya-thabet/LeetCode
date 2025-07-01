class Solution {
public:
    string convertDateToBinary(string date) {
        string  sYear = "", sMonth = "", sDay = ""; 
        int t  = 1; 
        
        for(char c : date){
            switch (t){
                case 1:
                    if(c=='-'){
                        t++;
                        continue; 
                    }
                    sYear+=c; 
                    break; 
                case 2:
                    if(c=='-'){
                        t++;
                        continue; 
                    }
                    sMonth+=c; 
                    break;
                case 3:
                    if(c=='-'){
                        t++;
                        continue; 
                    }
                    sDay+=c; 
                    break; 
            }
        }
        int year = stoi(sYear), month=stoi(sMonth), day=stoi(sDay);
        sYear = intToBinaryString(year); 
        sMonth = intToBinaryString(month);
        sDay = intToBinaryString(day); 

        return sYear + '-' + sMonth + '-' + sDay; 
    }

    string intToBinaryString(int n) {
        if (n == 0) return "0";
        std::string result;
        while (n > 0) {
            result = char('0' + (n % 2)) + result;
            n /= 2;
        }
        return result;
    }
};