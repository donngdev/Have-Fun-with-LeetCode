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
    // Space complexity: O(1)
    TreeNode* searchBST(TreeNode* root, int val)
    {
      if (root == NULL)
        return NULL;
      TreeNode* curr = root;
      while (curr)
      {
        if (curr->val == val)
          return curr;
        else if (curr->val < val)
          curr = curr->right;
        else if (curr->val > val)
          curr = curr->left;
      }
      return NULL;
    }
};