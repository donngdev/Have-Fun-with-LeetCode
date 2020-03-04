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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
      if (head == NULL || n <= 0)
        return head;

      ListNode* dummy_head = new ListNode(-1);
      dummy_head->next = head;

      ListNode* slow = dummy_head;
      ListNode* fast = dummy_head;
      while (fast && n >= 0)
      {
        fast = fast->next;
        n--;
      }
      while (fast)
      {
        fast = fast->next;
        slow = slow->next;
      }

      ListNode* del_node = slow->next;
      slow->next = del_node->next;
      delete del_node;
      del_node = NULL;
      return dummy_head->next;
    }
};