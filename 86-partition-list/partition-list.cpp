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
    void show(ListNode* n){
        cout<<"\n"<<(n->val);
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode cur(0);
        ListNode nxt(0);
        ListNode* nhead = &cur;
        ListNode* ntail = &nxt;
        while(head){
            int val = head->val;
          
            if(val<x){
                nhead->next = head;
                nhead = nhead->next;
            }
            else{
                ntail->next = head;
                ntail = ntail->next;
            }
            // show(nhead);
            //show(ntail);
            head = head->next;
        }
        nhead->next= nxt.next;
        ntail->next = NULL;

        return cur.next;
    }
};