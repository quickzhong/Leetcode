/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if( root == nullptr)
            return 0;

        int lDepth = maxDepth(root->left) + 1;
        int rDepth = maxDepth(root->right) + 1;
        
        if( lDepth > rDepth)
            return lDepth;
        else
            return rDepth;
    }
};