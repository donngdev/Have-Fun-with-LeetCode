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
    // Recursion
    // Time complexity: O(n)
    // Space complexity: O(logn)
    int maxDepth(TreeNode* root)
    {
      if (root == NULL)
        return 0;
      return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
    }
};