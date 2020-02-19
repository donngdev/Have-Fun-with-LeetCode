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
    bool isSymmetric(TreeNode* root)
    {
      if (root == NULL)
        return true;
      return is_symmetric(root->left, root->right);
    }
private:
  bool is_symmetric(TreeNode* p, TreeNode* q)
  {
    if (p == NULL && q == NULL)
      return true;
    if (!p || !q) // Either p or q is not NULL.
      return false; 
    
    if (p->val != q->val)
      return false;
    
    return is_symmetric(p->left, q->right) && is_symmetric(p->right, q->left);
  }
};