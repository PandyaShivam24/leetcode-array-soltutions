class Solution{
public:
    bool checkIfCanBreak(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int len=s1.size();
        bool sa=true,sb=true;
        for(int i=0;i<len;i++){
            if(s1[i]<s2[i])
            {
                sa=false;
            }
            if(s2[i]<s1[i])
            {
                sb=false;
            }
        }
        if(sa||sb)
        {
            return true;
        }
        return false;
    }
};