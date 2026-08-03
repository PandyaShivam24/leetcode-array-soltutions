class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) 
    {
        int k=processorTime.size(),n=tasks.size();
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        int ans=0;
        int j=0,temp=0,i=n-1;
        while(j<k)
        {
            temp=(processorTime[j]+tasks[i]);
            if(temp>ans)
            {
                ans=temp;
            }
            j++;
            i=i-4;
        }
        return ans;
    }
};