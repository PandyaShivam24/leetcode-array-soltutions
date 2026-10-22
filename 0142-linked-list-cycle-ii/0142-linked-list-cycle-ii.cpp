/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
        map<ListNode* ,int> hm;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            if(hm.count(temp)==1)
            {
                return temp;
            }
            hm[temp]=0;
            temp=temp->next;
        }
        return nullptr;
    }
};
        
