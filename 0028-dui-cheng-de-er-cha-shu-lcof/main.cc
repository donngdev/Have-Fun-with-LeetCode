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
    // Space complexity: O(n)
    bool isSymmetric(TreeNode* root)
    {
      if (!root)
        return true;
      return is_symmetric(root->left, root->right);
    }
 private:
  bool is_symmetric(TreeNode* node1, TreeNode* node2)
  {
    if (!node1 && !node2)
      return true;
    if (!node1 || !node2)
      return false;
    if (node1->val != node2->val)
      return false;
    
    return is_symmetric(node1->left, node2->right) && is_symmetric(node1->right, node2->left);
  }
};