class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int n=nums.size();
        k=k%n;
        reversee(nums,0,n-k-1);
        reversee(nums,n-k,n-1);
        reversee(nums,0,n-1);
    }
    void reversee(vector<int>& num,int st,int en)
    {
        int t=(en-st+1)/2;
        for(int i=0;i<t;i++)
        {
            int temp=num[st+i];
            num[st+i]=num[en-i];
            num[en-i]=temp;
        }
    }
};