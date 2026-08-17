class Solution {
public:
    int minPartitions(string n) 
    {
        int l=n.size();
        int maxi=0;
        for(int i=0;i<l;i++)
        {
            int temp=n[i]-'0';
            maxi=max(maxi,temp);
        }
        return maxi;
    }
};