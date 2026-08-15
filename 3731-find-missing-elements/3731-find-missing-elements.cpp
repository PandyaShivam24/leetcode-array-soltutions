class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-1;i++) 
        {
            for (int miss= nums[i]+1;miss<nums[i+1];miss++) 
            {
                ans.push_back(miss);
            }
        }
        return ans;
    }
};