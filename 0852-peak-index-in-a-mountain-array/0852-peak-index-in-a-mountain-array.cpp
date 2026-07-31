class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int n=arr.size();
        int max=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {max=arr[i];
            temp=i;}
        }    
        return temp;
    }
};