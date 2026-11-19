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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* tmp=head;
        while(tmp!=nullptr && tmp->next!=nullptr)
        {
            if(tmp->val==tmp->next->val)
            {
                while(tmp->next!=nullptr && tmp->val==tmp->next->val)
                {
                    tmp=tmp->next;
                }
                tmp=tmp->next;
                prev->next=tmp;
            }
            else
            {
                prev=prev->next;
                tmp=tmp->next;
            }
        }
        return dummy->next;
    }
};