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
    // Top-down
    // Time complexity: O(n)
    // Space complexity: (n)
    TreeNode* invertTree(TreeNode* root)
    {
      if (root == NULL)
        return NULL;
      TreeNode* left_node = root->left;
      root->left = root->right;
      root->right = left_node;
      root->left = invertTree(root->left);
      root->right = invertTree(root->right);
      return root;
    }
};