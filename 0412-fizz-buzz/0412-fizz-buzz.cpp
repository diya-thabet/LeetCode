class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer; 

        for(int j = 0; j<n ; j++){

            int i = j+1;

            if((i%3 == 0) && (i%5==0)) answer.push_back("FizzBuzz");
            else if(i%3 == 0) answer.push_back("Fizz");
            else if(i%5==0) answer.push_back("Buzz"); 
            else {
                string s = to_string(i); 
                answer.push_back(s); 
            }
        }

        return answer; 
        
    }
};