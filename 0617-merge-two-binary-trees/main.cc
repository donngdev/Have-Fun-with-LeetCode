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
    // Space complexity: O(n)
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
    {
      if (!t1 && !t2)
        return NULL;

      TreeNode* root = new TreeNode((t1 == NULL ? 0 : t1->val) + (t2 == NULL ? 0 : t2->val));

      root->left = mergeTrees(t1 == NULL ? NULL : t1->left, t2 == NULL ? NULL : t2->left);
      root->right = mergeTrees(t1 == NULL ? NULL : t1->right, t2 == NULL ? NULL : t2->right);

      return root;
    }
};