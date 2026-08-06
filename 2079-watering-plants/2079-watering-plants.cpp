class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int n=plants.size(),c=0;
        int temp=capacity;
        for(int i=0;i<n;i++)
        {
            if(plants[i]<=temp)
            {
                c++;
                temp-=plants[i];
            }
            else
            {
                c+=(2*i+1);
                temp=capacity-plants[i];
            }
        }    
        return c;
    }
};