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
    ListNode* middleNode(ListNode* head)
    {
      ListNode* slow = head;
      ListNode* fast = head->next;
      while (fast)
      {
        slow = slow->next;
        fast = fast->next == NULL ? NULL : fast->next->next;
      }
      return slow;
    }
};