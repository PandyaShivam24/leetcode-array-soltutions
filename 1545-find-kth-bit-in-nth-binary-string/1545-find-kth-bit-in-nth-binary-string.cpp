class Solution{
public:
    char findKthBit(int n,int k){
        string s0="0";
        while(n>1)
        {
            int len=s0.size();
            s0+="1";
            for(int i=len-1;i>=0;i--)
            {
                if(s0[i]=='0')
                {
                    s0+="1";
                }
                else
                {
                    s0+="0";
                }
            }
            n--;
        }
        return s0[k-1];
    }
};