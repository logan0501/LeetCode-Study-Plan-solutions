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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            double avg=0;
            for(int i=0;i<size;i++){
                TreeNode* top = q.front();
                q.pop();
                avg+=top->val;
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            res.push_back(avg/size);
            
        }
        return res;
    }
};