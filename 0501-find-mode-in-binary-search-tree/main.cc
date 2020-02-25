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
    vector<int> findMode(TreeNode* root)
    {
      if (root == NULL)
        return {};
      dfs(root);

      int best = 0;
      vector<int> res;
      for (const pair<int, int> &p : freq)
      {
        if (p.second > best)
        {
          best = p.second;
          res = {p.first};
        }
        else if (p.second == best)
          res.push_back(p.first);
      }
      return res;
    }
 private:
  unordered_map<int, int> freq;

  void dfs(TreeNode* node)
  {
    if (node == NULL)
      return;
    dfs(node->left);
    freq[node->val]++;
    dfs(node->right);
  }
};