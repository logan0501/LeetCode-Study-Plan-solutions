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
vector<string> res;
void helper(TreeNode* root,string str){

	if(!root->left && !root->right){
        str+=to_string(root->val);
        res.push_back(str);return;}
	if(root->left){
        cout<<"l"<<endl;
        helper(root->left,str+to_string(root->val)+"->");
	}
    if(root->right){

        helper(root->right,str+to_string(root->val)+"->");
    }
   
}
vector<string> binaryTreePaths(TreeNode* root) {
    helper(root,"");
	return res;
}
};