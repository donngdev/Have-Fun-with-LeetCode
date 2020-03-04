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
    ListNode* deleteDuplicates(ListNode* head)
    {
      if (head == NULL)
        return NULL;

      ListNode* dummy_head = new ListNode(-1);
      dummy_head->next = head;

      ListNode* prev = dummy_head;
      ListNode* curr = prev->next;
      while (curr)
      {
        ListNode* p = curr;
        int num = 0;
        while (p && p->val == curr->val)
        {
          num++;
          p = p->next;
        }
        if (num > 1)
          prev->next = p;
        else
          prev = curr;

        curr = p;  
      }

      return dummy_head->next;
    }
};