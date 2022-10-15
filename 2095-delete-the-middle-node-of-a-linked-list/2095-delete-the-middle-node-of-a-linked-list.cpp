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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
     ListNode* sl = head->next;
        ListNode* f = head->next;
        ListNode* prev = head;
        while((f->next!=NULL)&&(f->next->next!=NULL)){
            f = f->next->next;
            prev = sl;
            sl = sl->next;
        }
        prev->next = sl->next;
        delete(sl);
        return head;
    }
};