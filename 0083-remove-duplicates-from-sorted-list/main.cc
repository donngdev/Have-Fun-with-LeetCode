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
    // Time complexity: O(n)
    // Space complexity: O(1)
    ListNode* deleteDuplicates(ListNode* head)
    {
      if (head == NULL)
        return NULL;
      ListNode* prev = head;
      ListNode* new_head = head;
      while (prev->next != NULL)
      {
        if (prev->val == prev->next->val)
        {
          // delete prev->next
          ListNode* del_node = prev->next;
          prev->next = del_node->next;
          delete del_node;
          del_node = NULL;
        }
        else
          prev = prev->next;
      }
      return new_head;
    }
};