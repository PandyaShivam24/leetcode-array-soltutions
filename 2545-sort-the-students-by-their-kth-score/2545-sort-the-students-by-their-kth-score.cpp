class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for (int i=0;i<n-1;i++) 
        {
            int max=i;
            for (int j=i+1;j<n;j++)
            {
                if (score[j][k]>score[max][k]) 
                {
                    max=j;
                }
            }
            if (max!=i) 
            {
                vector<int>temp=score[i];
                score[i]=score[max];
                score[max]=temp;
            }
        }
        return score;
    }
};
