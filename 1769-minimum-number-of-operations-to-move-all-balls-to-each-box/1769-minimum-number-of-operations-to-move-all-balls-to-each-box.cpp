class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int len=boxes.size(),sum;
        vector<int>ans;    
        int i=0;
        while(i<len)
        {
            sum=0;
            for(int j=0;j<len;j++)
            {
                if(boxes[j]=='1')
                {
                sum+=abs(i-j);
                }
            }
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};