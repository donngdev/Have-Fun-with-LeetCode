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
    int kthLargest(TreeNode* root, int k)
    {
      if (root == NULL)
        return -1;

      stack<TreeNode*> st;
      TreeNode* curr = root;
      while (curr != NULL || !st.empty())
      {
        while (curr != NULL)
        {
          st.push(curr);
          curr = curr->right;
        }
        if (!st.empty())
        {
          curr = st.top();
          st.pop();
          if (k-- <= 1)
            break;
          curr = curr->left;  
        }
      }
      return curr->val;
    }
};