/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if(!head)  return false;
        //  ListNode *slow, *fast;
        //  slow = fast = head;
        //  do{
        //    slow =  slow -> next;
        //    fast = fast -> next;
        //    if(fast) fast = fast -> next;
        //  }while(fast!=NULL && fast!=slow);

        //  return (fast!=NULL && fast==slow);

        ListNode *slow = head,*fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
    
};