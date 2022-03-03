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
    void reorderList(ListNode* head) {
        deque<int> dq;
        ListNode* temp =head;
        while(temp){
            dq.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int c=0;
        while(temp){
            if(c%2==0){
                temp->val=dq.front();
                dq.pop_front();
            }else{
                temp->val=dq.back();
                dq.pop_back();
            }
            c++;
            temp=temp->next;
        }
    }
};