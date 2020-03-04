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
    ListNode* rotateRight(ListNode* head, int k)
    {
      if (head == NULL || k == 0)
        return head;

      ListNode* phead = head;
      int length = 1;
      while (phead->next != NULL)
      {
        length++;
        phead = phead->next;
      }
      phead->next = head; // Cycle

      int shift = length - k % length;
      for (int i = 0; i < shift - 1; ++i)
        head = head->next;

      ListNode* r = head->next;
      head->next = NULL;

      return r;
    }
};