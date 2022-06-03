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
    bool check(vector<int> v){
        int i = 0 ; 
        int j = v.size()-1;
        while(i<j){
            if(v[i] != v[j]) return false;
            i++,j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> sv;
        while(head!=NULL){
            sv.push_back(head->val);
            head = head->next;
        }
        return check(sv);
    }
};