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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
      if (!headA || !headB)
        return NULL;
      
      ListNode* q = headA;
      ListNode* p = headB;
      while (q != p)
      {
        q = (q == NULL ? headB : q->next);
        p = (p == NULL ? headA : p->next);
      }

      return q;
    }
};