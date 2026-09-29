class Solution{
public:
    int calPoints(vector<string>& operations){
        stack<int>ans;
        
        for(string op:operations){
            if(op=="+")
            {
                int top1=ans.top();
                ans.pop();
                int top2=ans.top();    
                ans.push(top1);
                ans.push(top1+top2); 
            }
            else if(op=="C")
            {
                ans.pop();
            }
            else if(op=="D")
            {
                ans.push(2*ans.top());
            }
            else
            {
                ans.push(stoi(op));
            }
        }
        int totalSum=0;
        while(!ans.empty()){
            totalSum+=ans.top();
            ans.pop();
        }
        
        return totalSum;
    }
};