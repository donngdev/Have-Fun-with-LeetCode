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
    int getDecimalValue(ListNode* head)
    {
      int res = 0;
      ListNode* curr = head;

      while (curr)
      {
        res |= curr->val;
        res = res << 1;
        curr = curr->next;
      }
      return res >> 1;
    }
};