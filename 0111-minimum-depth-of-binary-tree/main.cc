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
  // Time complexity: O(logn)
  // Space complexity: O(logn)
  int minDepth(TreeNode* root)
  {
    if (root == NULL)
      return 0;
    return depth(root);
  }

 private:
  int depth(TreeNode* root)
  {
    if (root->left == NULL && root->right == NULL)
      return 1;
    else if (root->left != NULL && root->right == NULL)
      return depth(root->left) + 1;
    else if (root->right != NULL && root->left == NULL)
      return depth(root->right) + 1;

    return min(depth(root->left) + 1, depth(root->right) + 1);
  }
};