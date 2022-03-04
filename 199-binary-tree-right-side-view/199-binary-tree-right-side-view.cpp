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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
        
            int n=q.size();
           
            for(int i=0;i<n;i++){
                auto top = q.front();
                q.pop();
                if(i==n-1){
                    res.push_back(top->val);
                }
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
        }
        return res;
    }
};