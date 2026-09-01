class Solution{
public:
    int numOfPairs(vector<string>&nums,string target){
        int l=nums.size();
        int c=0;
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++)
            {
                if(nums[i]+nums[j]==target & i!=j)
                {
                    c++;
                }
            }
        }
        return c;
    }
};