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
    int deepestLeavesSum(TreeNode* root) {
     int sum=0;
    if(!root)return sum;
    queue<TreeNode* > q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        sum=0;
        for(int i=0;i<size;i++){
            auto cur = q.front();
            sum+=cur->val;
            q.pop();
            if(cur->left)q.push(cur->left);
            if(cur->right)q.push(cur->right);
        }
    }  
    return sum;          
    }
};