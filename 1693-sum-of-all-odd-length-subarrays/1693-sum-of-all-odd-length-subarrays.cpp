class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefix;
        int ans=0;
        int sum=0;
        if(n<3)
        {
            for(int a:arr)
            {
                sum+=a;
            }
            return sum;
        }
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            prefix.push_back(sum);
        }
        ans=sum;
         
        int i=0;
        
        int j=3;
        
        
        while(j<=n)
        {
           i=0;
            while(j+i<=n)
            {
                int end=i+j-1;
                if(i==0) ans+=prefix[end];
                else
                {
                    ans+=(prefix[end]-prefix[i-1]);
                }
                i++;
                
            }
            
           j+=2;
        }
        return ans;
       

        
    }
};