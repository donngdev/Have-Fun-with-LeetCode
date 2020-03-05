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
    ListNode* deleteNode(ListNode* head, int val)
    {
      if (!head)
        return NULL;
      if (head->val == val)
        return head->next;
      head->next = deleteNode(head->next, val);
      return head;
    }
};