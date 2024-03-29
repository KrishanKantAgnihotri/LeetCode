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
        if(head==NULL) return false;
       
        while(head!=NULL){
            if(head->val == 1e8) return true;
            head->val = 1e8;
            head=head->next;
        }
        return false;
    }
};