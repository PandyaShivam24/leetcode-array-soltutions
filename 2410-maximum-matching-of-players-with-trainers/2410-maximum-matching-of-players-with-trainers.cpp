class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers)
    {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int t=trainers.size()-1,p=players.size()-1,c=0;
        while(p>=0 && t>=0)
        {
            if(players[p]>trainers[t])
            {
                p--;
            }
            else
            {
                c++;
                p--;
                t--;
            }
        }
        return c;
    }
};