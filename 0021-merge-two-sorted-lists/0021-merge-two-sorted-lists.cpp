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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h=NULL, *t=NULL;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }

        while(list1 != NULL && list2 != NULL){
            if(h == NULL && t == NULL){
                if(list1->val < list2->val){
                    h=list1;
                    t=list1;
                    list1=list1->next;
                }
                else{
                    h=list2;
                    t=list2;
                    list2=list2->next;
                }
            }
            else{
                if(list1->val < list2->val){
                    t->next=list1;
                    t=t->next;
                    list1=list1->next;
                }
                else{
                    t->next=list2;
                    t=t->next;
                    list2=list2->next;
                }
            }
        }
        
        t->next=list1 ? list1 : list2;
        

        return h;
    }
};