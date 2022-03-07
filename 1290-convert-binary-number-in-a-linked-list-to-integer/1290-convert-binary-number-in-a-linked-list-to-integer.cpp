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
    int getDecimalValue(ListNode* head) {
        string res="";
        while(head){
            res+=to_string(head->val);
            head=head->next;
        }
        int j=1,ans=0;
        for(int i=res.size()-1;i>=0;i--){
           if(res[i]=='1')
            ans+=j;
        j*=2;
        }
        return ans;
    }
};