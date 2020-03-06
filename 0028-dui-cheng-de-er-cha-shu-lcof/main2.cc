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
    // Iterator
    // Time complexity: O(n)
    // Space complexity: O(n)
    bool isSymmetric(TreeNode* root)
    {
      if (root == NULL)
        return true;

      queue<TreeNode*> q;
      q.push(root->left);
      q.push(root->right);
      while (!q.empty())
      {
        TreeNode* a = q.front();
        q.pop();
        TreeNode* b = q.front();
        q.pop();

        if (a && b)
        {
          if (a->val != b->val)
            return false;
          
          q.push(a->left);
          q.push(b->right);
          q.push(a->right);
          q.push(b->left);
        }

        else if ((!a && b) || (a && !b))
          return false;

      }

      return true;
    }
};