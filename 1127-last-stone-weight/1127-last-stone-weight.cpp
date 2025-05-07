class Solution {
public:
    int lastStoneWeight(vector<int>& arr) 
    {
        int n=arr.size();
        priority_queue<int> pq;
        for(auto itr:arr) pq.push(itr);
        while(pq.size()>=2)
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b) continue;
            else 
            {
                if(b<a) swap(a,b);
                b-=a;
                pq.push(b);
            }
        }
        if(pq.size()==1) return pq.top();
        else return 0;
    }
};