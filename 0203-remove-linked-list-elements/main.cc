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
    // Add a dummy head, So every node can use the same logical processing.
    // Time complexity: O(n)
    // Space complexity: (1)
    ListNode* removeElements(ListNode* head, int val)
    {
      if (head == NULL)
        return head;

      ListNode* prev = new ListNode(-1);
      prev->next = head;
      ListNode* prev_head = prev;
      while (prev->next != NULL)
      {
        if (prev->next->val == val)
        {
          ListNode* del_node = prev->next;
          prev->next = del_node->next;
          delete del_node;
          del_node = NULL;
        }
        else
          prev = prev->next;
      }
      ListNode* new_head = prev_head->next;
      delete prev_head;
      prev_head = NULL;
      return new_head;
    }
};