class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans(n,0);
        int leftOne=0,leftOps=0,rightOne=0,rightOps=0;
        for(int i=0;i<n;i++){
            ans[i]+=leftOps;
            ans[n-i-1]+=rightOps;
            if(boxes[i]=='1') leftOne++;
            leftOps+=leftOne;
            if(boxes[n-i-1]=='1') rightOne++;
            rightOps+=rightOne;
        }
        return ans;
    }
};