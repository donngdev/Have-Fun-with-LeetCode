// https://leetcode-cn.com/problems/minimum-height-tree-lcci/

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
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
      return generate(nums, 0, nums.size() - 1);
    }
 private:
  TreeNode* generate(const vector<int> &nums, int l, int r)
  {
    if (l > r)
      return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = generate(nums, l, mid - 1);
    root->right = generate(nums, mid + 1, r);

    return root;
  }
};