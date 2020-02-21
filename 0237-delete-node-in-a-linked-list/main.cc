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
    // Space complexity: (1)
    void deleteNode(ListNode* node)
    {
      assert(node != NULL && node->next != NULL);
      
      node->val = node->next->val;
      ListNode* del_node = node->next;
      node->next = del_node->next;
      delete del_node;
      del_node = NULL;
      return;
    }
};