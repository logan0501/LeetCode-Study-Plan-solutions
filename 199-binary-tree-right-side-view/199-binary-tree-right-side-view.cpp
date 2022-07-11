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
        if(!root)return{};
        vector<int> res;
        queue<TreeNode* > q;
        q.push(root);
        while(q.size()){
          
            int size = q.size();
            for(int i=0;i<size;i++){
                auto topp = q.front();
                q.pop();
                if(i==size-1)res.push_back(topp->val);
                if(topp->left)q.push(topp->left);
                if(topp->right)q.push(topp->right);
            }
        }
        return res;
    }
};