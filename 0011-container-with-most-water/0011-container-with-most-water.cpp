class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int area=0,max=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int l=j-i;
            if(height[i]>height[j])
            {area=l*height[j];
                j--;}
            else
            {area=l*height[i];
                i++;}
            if(area>max)
            {
                max=area;
            }
        }
        return max;
    }
};