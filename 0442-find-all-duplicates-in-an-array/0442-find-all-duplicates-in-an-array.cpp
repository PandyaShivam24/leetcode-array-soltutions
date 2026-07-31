class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int>out;
        int n=nums.size();
        int key,count=0;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                out.push_back(nums[i]);
            }
        }
        return out;
   }
};