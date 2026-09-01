class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int c=0;
        int i=0;
        while(i<jewels.size())
        {
            for(int j=0;j<stones.size();j++)
            {
                if(jewels[i]==stones[j])
                {
                    c++;
                }
            }
            i++;
        }
        return c;
    }
};