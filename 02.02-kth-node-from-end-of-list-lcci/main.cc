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
    // Space complexity: (1)
    int kthToLast(ListNode* head, int k)
    {
      ListNode* p = head;
      ListNode* q = head;
      while (k && q)
      {
        q = q->next;
        k--;
      }
      while (q)
      {
        p = p->next;
        q = q->next;
      }

      return p->val;
    }
};