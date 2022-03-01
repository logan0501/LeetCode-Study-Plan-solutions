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
    int pi=0;
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int is,int ie){
        if(is>ie)return NULL;
        TreeNode* root = new TreeNode(preorder[pi++]);
        int ii;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==root->val){ii=i;break;}
        }
        root->left=helper(preorder,inorder,is,ii-1);
        root->right=helper(preorder,inorder,ii+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,inorder.size()-1);
    }
};