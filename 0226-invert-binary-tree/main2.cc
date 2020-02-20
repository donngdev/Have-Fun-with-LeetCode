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
    // Buttom - Up
    // Time complexity: O(n)
    // Space complexity: (n)
    TreeNode* invertTree(TreeNode* root)
    {
      if (root == NULL)
        return NULL;
      root->left = invertTree(root->left);
      root->right = invertTree(root->right);
      
      swap(root->left, root->right);

      return root;
    }
};