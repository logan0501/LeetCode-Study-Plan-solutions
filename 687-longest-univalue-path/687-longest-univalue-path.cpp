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
    int res=0;
    int helper(TreeNode* root,int prev){
        if(!root)return 0;
        int l=helper(root->left,root->val);
        int r=helper(root->right,root->val);
        res=max(res,l+r);
        if(root->val == prev){
            return max(r,l)+1;
        }
        return 0;
        
    }
    int longestUnivaluePath(TreeNode* root) {
        helper(root,INT_MIN);
        return res;
    }
};