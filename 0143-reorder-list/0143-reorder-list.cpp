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
    void rearrange(ListNode* &head, stack<ListNode*>& s){
        if(s.empty()){
            head->next=NULL;
            return;
        }
        ListNode* temp = head->next;
        head->next = s.top();
        s.pop();
        head->next->next = temp;
        head = temp;
        rearrange(head,s);
    }
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        while(slow->next!=NULL){
            s.push(slow->next);
            slow = slow->next;
        }
        rearrange(head,s);
        

    }
};