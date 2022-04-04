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
struct MyCmp{
    bool operator()(ListNode *a,ListNode *b){
        return a->val > b->val;
    }
};
ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*,vector<ListNode *>,MyCmp> pq;
    for(auto a:lists){
        if(a)pq.push(a);
    }  
    ListNode head(0);
    ListNode* tail = &head;
    while (!pq.empty())
    {
        auto temp = pq.top();
        pq.pop();
        tail->next = temp;
        tail = tail->next;
        if(temp->next)pq.push(temp->next);

    }
    tail->next = NULL;
    return head.next;
    
}
};