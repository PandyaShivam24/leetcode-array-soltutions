class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum+=matrix[i][j];
            }
            ans.push_back(sum);
            sum=0;
        }    
        return ans;
    }
};