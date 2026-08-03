class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size(),temp;
        if(n<2)
        {return 0;}
        int max=0;
        for(int i=n-1;i>0;i--)
        {
            temp=nums[i]-nums[i-1];
            if(temp>max)
            {
                max=temp;
            }
        }
        return max;
    }
};