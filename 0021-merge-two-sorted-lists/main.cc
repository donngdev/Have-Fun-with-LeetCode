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
  // Iteration 
  // Time complexity: O(n) n is the total number of nodes of l1 and l2.
  // space complexity: O(1)
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
  {
    if (l1 == NULL || l2 == NULL)
      return l1 == NULL ? l2 : l1;
    
    ListNode* curr = new ListNode(-1);
    ListNode* prev = curr;
    while (l1 != NULL && l2 != NULL)
    {
      if (l1->val <= l2->val)
      {
        curr->next = l1;
        curr = curr->next;
        l1 = l1->next;
      }
      else
      {
        curr->next = l2;
        curr = curr->next;
        l2 = l2->next;
      }
    }
    if (l1 == NULL)
      curr->next = l2;
    else
      curr->next = l1;
    
    ListNode* ret = prev->next;
    delete prev;
    prev = NULL;
    return ret;
  }
};