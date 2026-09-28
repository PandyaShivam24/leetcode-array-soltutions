class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        stack<char>stack;
        string ans;
        int i=0;
        while(i<word.length())
        {
            stack.push(word[i]);
            if(word[i]==ch)
            {
                while(!stack.empty())
                {
                    ans.push_back(stack.top());
                    stack.pop();
                }
                i++;
                while(i<word.length())
                {
                    ans.push_back(word[i]);
                    i++;
                }
                return ans;
            }
           i++;
        }
        return word;
    }

};