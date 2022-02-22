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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   if(headA==NULL || headB==NULL)return 0;
   ListNode *p=headA,* q=headB;
   while(p!=q){
       if(p==NULL)p=headB;
       else
       p=p->next;
       if(q==NULL)q=headA;
       else q=q->next;
   }
   return p;
    }
};