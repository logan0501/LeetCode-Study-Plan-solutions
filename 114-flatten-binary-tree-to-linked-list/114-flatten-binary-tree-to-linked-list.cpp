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
    TreeNode* prev=NULL;
    void helper(TreeNode* root){
        if(!root)return;
        helper(root->right);
        helper(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
    void flatten(TreeNode* root) {
        helper(root);
    }
};