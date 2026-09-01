class Solution{
public:
    int passwordStrength(string password){
        int len=password.size();
        int c=0;
        bool seen[128]={false};
        for(int i=0;i<len;i++)
        {
            if(seen[password[i]])
            {
                continue;
            }
            seen[password[i]]=true;
            if(97<=int(password[i])&&int(password[i])<=122)
            {
                c+=1;
            }
            else if(65<=int(password[i])&&int(password[i])<=90)
            {
                c+=2;
            }
            else if(48<=int(password[i])&&int(password[i])<=57)
            {
                c+=3;
            }
            else if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$')
            {
                c+=5;
            }
        }
        return c;
    }
};