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
    // Space complexity: (n) set
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
      unordered_set<ListNode*> record;
      while (headA != NULL)
      {
        record.insert(headA);
        headA = headA->next;
      }
      while (headB != NULL)
      {
        if(record.find(headB) != record.end())
          return headB;
        headB = headB->next;  
      }
      return NULL;
    }
};