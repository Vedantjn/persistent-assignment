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
    bool dfs(TreeNode* root, int targetSum,int currentsum){
        if(!root ) return false;

        currentsum += root->val;
        
        if(!root->left and !root->right ) return targetSum == currentsum;

        return dfs(root->left,targetSum,currentsum) || dfs(root->right,targetSum,currentsum);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum,0);
    }
};