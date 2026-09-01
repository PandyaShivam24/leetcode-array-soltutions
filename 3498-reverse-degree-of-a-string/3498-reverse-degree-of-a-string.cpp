class Solution{
public:
    int reverseDegree(string s)
    {
        int sum=0;
        for(int j=0;j<s.size();j++)
        {
            int rev=26-(s[j]-'a');
            sum+=rev*(j+1);
        }
        return sum;
    }
};