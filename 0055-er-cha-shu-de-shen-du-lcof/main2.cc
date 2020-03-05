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
    // Use Level order traverse
    // Time compliexity: O(n)
    // Space complexity: O(1)
    int maxDepth(TreeNode* root)
    {
      if (!root)
        return 0;
      queue<pair<TreeNode*, int>> q;
      q.push(pair<TreeNode*, int>(root, 1));
      int depth = 1;
      while (!q.empty())
      {
        pair<TreeNode*, int> curr = q.front();
        q.pop();

        depth = max(depth, curr.second);

        if (curr.first->left)
          q.push(pair<TreeNode*, int>(curr.first->left, curr.second+1));
        if (curr.first->right)
          q.push(pair<TreeNode*, int>(curr.first->right, curr.second+1));
      }

      return depth;
    }
};