class Solution{
public:
    bool isValid(string s)
    {
        stack<char>ans;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            {
                ans.push(s[i]);
            }
            else
            {
                if(ans.empty())
                {
                    return false;
                }
                char top=ans.top();
                if((s[i]=='}'&&top=='{')||(s[i]==')'&&top=='(')||(s[i]==']'&&top=='['))
                {
                    ans.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return ans.empty();
    }
};