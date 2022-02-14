/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  
    void helper(TreeNode* root,int &k,int& i){
        if(!root)return;
        helper(root->left,k,i);
        k--;
        if(k==0)i=root->val;
        return helper(root->right,k,i);
    }
    int kthSmallest(TreeNode* root, int k) {
        int i=-1;
        helper(root,k,i);
        return i;
    }
};