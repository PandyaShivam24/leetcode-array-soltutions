class Solution{
public:
    int prefixCount(vector<string>&words,string pref)
    {
        int c=0;
        int n=pref.size();
        for(string w:words)
        {
            if(w.size()>=n&&w.substr(0,n)==pref)
            {
                c++;
            }
        }
        return c;
    }
};