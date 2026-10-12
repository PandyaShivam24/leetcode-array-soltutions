class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string t1=strs[0];
        string t2=strs[n-1];
        for(int i=0;i<t1.size();i++)
        {
            if(t1[i]==t2[i])
            {
                ans+=t1[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};