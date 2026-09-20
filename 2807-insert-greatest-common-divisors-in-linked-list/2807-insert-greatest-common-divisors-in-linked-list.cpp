/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
private:
    int getGCD(int a,int b)
    {
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
public:
    ListNode*insertGreatestCommonDivisors(ListNode*head)
    {
        ListNode*curr=head;
        while(curr!=NULL&&curr->next!=NULL)
        {
            int gcdVal=getGCD(curr->val,curr->next->val);
            ListNode*newNode=new ListNode(gcdVal);
            newNode->next=curr->next;
            curr->next=newNode;
            curr=newNode->next;
        }
        return head;
    }
};