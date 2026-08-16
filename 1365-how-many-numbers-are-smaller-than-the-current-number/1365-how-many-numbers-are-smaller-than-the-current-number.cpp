class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans;
        int c;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(nums[j]<nums[i])
                {
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};