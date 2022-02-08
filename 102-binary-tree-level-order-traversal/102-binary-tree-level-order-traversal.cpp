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
        if(!root)return {};
       queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
          vector<int> temp;
        while(!q.empty()){
        
            int size = q.size();
            for(int i=0;i<size;i++){
               
                 auto top = q.front(); 
                q.pop();
               temp.push_back(top->val);        
                if(top->left)q.push(top->left);
            if(top->right)q.push(top->right);
             }
   
            res.push_back(temp);
            temp.clear();
           
        }
        return res;
    }
};