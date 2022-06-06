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
   ListNode *calc(ListNode *one,int a,ListNode *two,int b){
       if(b>a){
           swap(a,b);
           swap(one,two);
       }
       while(b!=a){
           a--;
           one = one->next;
       }
       while(one!=two){
           one = one->next;
           two = two->next;
       }
       return one;
   }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *one = headA;
        ListNode *two = headB;
        int lena = 0 ,lenb = 0 ; 
        while(one!=NULL){
            one = one->next;
            lena++;
        }
        while(two!=NULL){
            two = two->next ; 
            lenb++;
        }
        return calc(headA,lena ,headB,lenb);
    }
};