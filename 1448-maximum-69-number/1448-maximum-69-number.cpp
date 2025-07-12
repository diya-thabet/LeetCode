class Solution {
public:
    int maximum69Number (int num) {
      int n=num;
      int temp=0;
      int size=0;
      while(n)
      {
        size++;
        temp=temp*10+n%10;
        n/=10;
      }  
      int z=0;
        int maxN=0;
        while(temp)
        {
            if(temp%10==6 && z==0)
            {
                maxN=maxN*10+9;
                z=1;
            }
            else
            {
             maxN=maxN*10+temp%10;
            }
           temp/=10;

        }
        return maxN;
        }
        
    
};