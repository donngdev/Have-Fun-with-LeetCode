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
    // Time complexity: O(m + n)
    // Space complexity: O(1)
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
      ListNode* pA = headA;
      ListNode* pB = headB;
      while (pA != NULL || pB != NULL)
      {
        if (pA == pB)
          return pA;
        if (pA)
          pA = pA->next;
        else
          pA = headB;
        
        if (pB)
          pB = pB->next;
        else
          pB = headA;
      }
      return NULL;
    }
};