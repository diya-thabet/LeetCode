class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>v(26,0);
        int l=0;
        for(int i=0;i<chars.length();i++)
        {
            v[chars[i]-'a']++;
        }
        vector<int>v2=v;
        int f=1;
        for(int i=0;i<words.size();i++)
        {
            f=1;
            string a=words[i];
            for(int j=0;j<a.length();j++)
            {
                if(v[a[j]-'a']>0)
                v[a[j]-'a']--;
                else f=0;
                
            }
            if(f==1)
            l+=a.length();
            v=v2;
        }
        return l;
    }
};