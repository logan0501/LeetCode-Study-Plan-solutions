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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>  res;
        queue<TreeNode* > q;
        if(!root)return {};
        q.push(root);
        while(q.size()){
            auto size = q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                auto topp = q.front();
                q.pop();
                temp.push_back(topp->val);
                if(topp->left)q.push(topp->left);
                if(topp->right)q.push(topp->right);
            }
            res.push_back(temp);
        }
        return res;
    }
};