class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=piles[n-2];
            n-=2;
        }    
        return sum;
    }
};