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
    vector<vector<int>> res;
    void helper(TreeNode* root,int sum,vector<int> temp){
        if(!root)return;
        temp.push_back(root->val);
        if(!root->left && !root->right && root->val==sum){
            res.push_back(temp);
            temp.pop_back();
            return;
        }
        helper(root->left,sum-root->val,temp);
        helper(root->right,sum-root->val,temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp; 
        helper(root,targetSum,temp);
        return res;
    }
};