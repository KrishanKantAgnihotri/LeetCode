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
    ListNode* solve(ListNode* a,ListNode* b,int prev=0){
        if( (a==NULL) && (b==NULL) ){
            if(prev == 0)
            return NULL;
            else {
                ListNode* n1 = new ListNode(prev);
                return n1;
            }
        }
        if((a==NULL)||(b==NULL)){
            int x ;
            if(a) x = (a->val+prev);
            if(b) x = (b->val+prev);
            ListNode* n1 = new ListNode(x%10);
            if(a)
            n1->next = solve(a->next,b,x/10);
            else 
             n1->next = solve(a,b->next,x/10);
            return n1;
        }
        int x = a->val+b->val+prev;
        ListNode* n1  = new ListNode(x%10);
        n1->next = solve(a->next,b->next,x/10);
        return n1;
        
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      return solve(l1,l2);   
    }
};