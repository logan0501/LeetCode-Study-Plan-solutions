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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* kvals;
        ListNode* slow = head,*fast=head;
        while(k>1){
            fast=fast->next;
            k--;
        }
        kvals=fast;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        swap(kvals->val,slow->val);
        return head;
    }
};