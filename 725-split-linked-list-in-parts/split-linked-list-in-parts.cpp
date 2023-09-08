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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
         int len = 0 ; 
        ListNode* cur = head;
        while(cur){
            cur=cur->next;
            len++;
        }
        vector<ListNode*> ans;
        int each = len/k;
        int rem = len%k;
        int cnt = 0 ; 
        cur = head;
        while(cur){
            ans.push_back(cur);
            cnt = 1 ; 
            while(cnt<each){
                cur=cur->next;
                cnt++;
            }
            if(rem>0 && len>k){
                cur = cur->next;
                rem--;
            }
            ListNode* tmp = cur->next;
            cur->next = NULL;
            cur = tmp;
        }           
        while(ans.size()!=k)
            ans.push_back(NULL);
        return ans;
        
    }
};