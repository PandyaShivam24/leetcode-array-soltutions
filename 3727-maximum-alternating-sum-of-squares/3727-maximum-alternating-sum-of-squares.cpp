class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        vector<long long>sq;
        int n=nums.size();
        for(int i=0;i<n;i++) 
        {
            sq.push_back((long long)nums[i]*nums[i]);
        }
        sort(sq.begin(),sq.end());
        long long sum=0;
        for(int i=0;i<n;i++) 
        {
            if (i<n/2)
            {
                sum-=sq[i]; 
            } else 
            {
                sum+=sq[i]; 
            }
        }
        return sum;
    }
};