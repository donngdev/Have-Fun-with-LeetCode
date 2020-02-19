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
  // Use Queue
  // Time complexity: O(n)
  // Space complexity: O(n)
  vector<vector<int>> levelOrderBottom(TreeNode* root)
  {
    vector<vector<int>> res;
    if (root == NULL)
      return res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
      vector<int> one_level;
      int count = q.size();
      for (int i = 0; i < count; i++)
      {
        TreeNode* node = q.front();
        q.pop();
        one_level.push_back(node->val);
        if (node->left != NULL)
          q.push(node->left);
        if (node->right != NULL)  
          q.push(node->right);
      }
      res.insert(res.begin(), one_level);
    }

    return res;
  }
};s