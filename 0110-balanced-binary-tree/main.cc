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
    // Time complexity: O(nlogn)
    // Space complexity: O(n)
    bool isBalanced(TreeNode* root)
    {
      if (root == NULL)
        return true;

      if (abs(get_height(root->left) - get_height(root->right)) > 1)
        return false; 
      
      return isBalanced(root->left) && isBalanced(root->right);
    }

 private:
    int get_height(TreeNode* root)
    {
      if (root == NULL)
        return 0;
      return max(get_height(root->left) + 1, get_height(root->right) + 1);
    }
};