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
    // Iteration Traverse
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
        TreeNode* t1 = q.front();
        q.pop();
        TreeNode* t2 = q.front();
        q.pop();

        if (t1 == NULL && t2 == NULL)
          continue;
        if (!t1 || !t2)
          return false;
        if (t1->val != t2->val)
          return false;
        q.push(t1->left);
        q.push(t2->right);
        q.push(t1->right);
        q.push(t2->left);
      }
      return true;
    }
};