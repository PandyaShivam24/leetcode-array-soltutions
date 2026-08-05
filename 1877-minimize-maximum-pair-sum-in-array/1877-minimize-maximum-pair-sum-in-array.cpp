class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        int n=nums.size(),sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            sum=max(nums[i]+nums[n-i-1],sum);
        }    
        return sum;
    }
};