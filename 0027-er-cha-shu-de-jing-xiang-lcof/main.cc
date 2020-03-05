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
    // Time complexity: O(n)
    // Space comlexity: O(logn)
    TreeNode* mirrorTree(TreeNode* root)
    {
      if (!root)
        return NULL;
      root->left = mirrorTree(root->left);
      root->right = mirrorTree(root->right);

      swap(root->left, root->right);

      return root;
    }
};