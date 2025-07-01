class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=allowed.length();
        int count=0;

        for(auto &it: words){
            int t=it.length();
            int ok=0;
            for(int i=0;i<t;i++){
                int check=0;
                for(int j=0;j<n;j++){
                    if(it[i]==allowed[j]){
                        check=1;
                        break;
                    }
                }
                if(check==0){
                    ok=1;
                    break;
                }
            }
            if(ok==0)count++;
        }
        return count;
    }
};
//auto init = atexit([]() { ofstream("display_runtime.txt") << "0";});

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();