class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        bool p=false;
        int n=nums.size(),temp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                temp=i;
                p=true;
                break;
            }
        }    
        if(p==true)
        {
            return temp;
        }
        else
        {
            return -1;
        }
    }
};