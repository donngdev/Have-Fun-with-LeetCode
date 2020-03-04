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
    // Time complexity: O(N)
    // Space complexity: O(1)
    ListNode* swapPairs(ListNode* head)
    {
      ListNode* dummy_head = new ListNode(-1);
      dummy_head->next = head;

      ListNode* prev = dummy_head;
      ListNode* curr = head;
      while (curr && curr->next)
      {
        prev->next = curr->next;
        curr->next = curr->next->next;
        prev->next->next = curr;

        prev = curr;
        curr = curr->next;
      }

      ListNode* r = dummy_head->next;
      delete dummy_head;
      dummy_head = NULL;

      return r;
    }
};