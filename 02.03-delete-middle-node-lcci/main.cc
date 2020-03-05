/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    void deleteNode(ListNode* node)
    {
      node->val = node->next->val;
      ListNode* prev = node;
      ListNode* del_node = node->next;
      prev->next = del_node->next;
      delete del_node;
      del_node = NULL;
    }
};