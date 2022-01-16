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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = new ListNode();
    ListNode* temp=l3;
    int carry=0;
    while(l1 || l2){
         int x = 0, y = 0,sum=0;
      
            if(l1) x = l1 -> val;
            if(l2) y = l2 -> val;
        sum = x+y+carry;
        
        carry=sum/10;
          sum%=10;
        
       ListNode* q=new ListNode(sum);
       temp->next=q;
       temp=temp->next;
       if(l1)l1=l1->next;
       if(l2)l2=l2->next;

    }
    if(carry > 0){
        ListNode* q=new ListNode(carry);
        temp->next=q;
    }
    return l3->next;
  
    }
};