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
    typedef ListNode Node;
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        Node* prev=head,*curr=head->next;
        head=curr;
        while(1){
            Node* next = curr->next;
            curr->next=prev;
            if(!next || !next->next){
                prev->next=next;
                break;
            }
            prev->next=next->next;
            prev=next;
            curr=prev->next;
        }
        return head;
    }
};