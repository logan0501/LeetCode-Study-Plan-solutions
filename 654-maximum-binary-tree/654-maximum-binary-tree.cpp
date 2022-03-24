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
    int maxIdx(vector<int> &nums,int i,int j){
        int maxi=-1,maxe=INT_MIN;
        cout<<i<<j<<endl;
        for(int k=i;k<j;k++){
            if(maxe<nums[k]){
                maxe=nums[k];
                maxi=k;
            }
        }
        return maxi;
    }
    TreeNode* helper(vector<int> &nums,int i,int j){
        if(i==j)return NULL;
        int idx = maxIdx(nums,i,j);
       
        TreeNode* curr = new TreeNode(nums[idx]);
       
        curr->left = helper(nums,i,idx);
        curr->right = helper(nums,idx+1,j);
        return curr;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size());
    }
};