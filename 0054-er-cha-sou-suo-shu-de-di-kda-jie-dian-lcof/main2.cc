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
    // Space complexity: O(n) // recursion stack 
    int kthLargest(TreeNode* root, int k)
    {
      traverse(root, k);
      return kth_value;
    }

 private:
  int kth_value;

  void traverse(TreeNode* root, int &k)
  {
    if (root == NULL)
      return;
    traverse(root->right, k);
    if (k-- > 0)
      kth_value = root->val;
    traverse(root->left, k);
  }
};