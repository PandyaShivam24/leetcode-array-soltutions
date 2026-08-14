class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size();
        int c=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
                temp=max(c,temp);
            }
            else
            {
                c=0;
            }
        }    
        return temp;
    }
};