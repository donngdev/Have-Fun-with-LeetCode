class Solution {
public:
    // Use queue
    // Time complexity: O(n)
    // Space complexity: (n)
    TreeNode* invertTree(TreeNode* root)
    {
      if (root == NULL)
        return NULL;
      queue<TreeNode*> q;
      q.push(root);
      while (!q.empty())
      {
        TreeNode* node = q.front();
        q.pop();
        swap(node->left, node->right);
        if (node->left)
          q.push(node->left);
        if (node->right)
          q.push(node->right);
      }
      return root;
    }
};