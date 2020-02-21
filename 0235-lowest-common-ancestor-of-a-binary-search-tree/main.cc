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
    // Iteration
    // Time complexity: O(n)
    // Space complexity: O(1)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        while (root)
        {
          if ((root->val >= p->val && root->val <= q->val) || (root->val <= p->val && root->val >= q->val))
            return root;
          else if (root->val < p->val && root->val < q->val)
            root = root->right;
          else
            root = root->left;
        }
        return NULL;
    }
};