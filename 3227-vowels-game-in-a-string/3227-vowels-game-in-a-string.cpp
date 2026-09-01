class Solution{
public:
    bool doesAliceWin(string s){
        bool ans=false;
        int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                ans=true;
                break;
            }
        }
        return ans;
    }
};