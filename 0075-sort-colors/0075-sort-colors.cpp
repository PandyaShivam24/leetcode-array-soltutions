class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]<nums[min])
                {min=j;}
            }
            int temp=nums[min];
            nums[min]=nums[i];
            nums[i]=temp;
        }
    }
};