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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
      vector<vector<int>> res;
      if (root == NULL)
        return res;

      queue<TreeNode*> q;
      q.push(root);
      while (!q.empty())
      {
        vector<int> level;
        int size = q.size();
        while (size--)
        {
          TreeNode* curr = q.front();
          q.pop();
          level.push_back(curr->val);
          if (curr->left)
            q.push(curr->left);
          if (curr->right)  
            q.push(curr->right);
        }
        res.push_back(level);
      }

      return res;
    }
};