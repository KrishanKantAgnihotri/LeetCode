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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nn = 0 ; 
        ListNode* cur = head;
        while(cur!=NULL) cur = cur->next,nn++;
        nn = (nn-n);
        int i = 0;
        cur = head;
        ListNode* prev = NULL;
        while(cur!=NULL){
            if(i == nn){
              if(prev == NULL){
                  head = head->next;
                  return head;
              }
                prev->next = cur->next;
                return head;
            }
            i++;
            prev = cur;
            cur = cur->next;
        }
        return head;
            
    }
};